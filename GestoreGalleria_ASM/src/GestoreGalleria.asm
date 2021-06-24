asm GestoreGalleria

import ../STDL/StandardLibrary
//questo è un esempio per una piccola galleria da 300mt con soli 3 sensori:
//con più sensori la struttura è molto simile ma per un gran numero di sensori non consente il controllo del rosso ottimale: 
//è necessario fare il count dei sensori 

signature:
	enum domain Colori={VERDE|GIALLO|GIALLOLAMP|ROSSO}
	enum domain Segnali = {NOTRAFFIC|MODERATE|STANDING}
	dynamic controlled semaforo: Colori
	dynamic monitored semaforo_Override : Colori
	monitored sensore1: Segnali
	monitored sensore2: Segnali
	monitored sensore3: Segnali
	controlled appling: Boolean
	
	monitored override: Boolean
	/*
	controlled nSegnali: Integer
	controlled countNotraffic: Integer
	controlled countModerate: Integer
	controlled countStanding: Integer
	* 
	*/	
definitions:
macro rule r_setBlinkYellow =
	semaforo := GIALLOLAMP

macro rule r_setRed =
	if(semaforo = GIALLO or semaforo = GIALLOLAMP) then
	seq
		semaforo := ROSSO
		appling := false
	endseq
	else if(semaforo = VERDE) then
	seq
		semaforo := GIALLO
		appling := true
	endseq
	endif
	endif
		

macro rule r_setGreen =
	semaforo := VERDE

macro rule r_Override =
	semaforo := semaforo_Override

macro rule r_ProcessingSignals =
	if(appling) then
		r_setRed[]
	else
		if( (sensore1=NOTRAFFIC and sensore2=NOTRAFFIC and sensore3=NOTRAFFIC)
			or (sensore1=NOTRAFFIC and sensore2=MODERATE and sensore3=NOTRAFFIC )
			or (sensore2=NOTRAFFIC and sensore3=MODERATE and sensore1=NOTRAFFIC )
			or (sensore3=NOTRAFFIC and sensore1=MODERATE and sensore2=NOTRAFFIC )
			 ) then
		r_setGreen[]
		else
			if( (sensore1=STANDING and sensore2=STANDING and sensore3=STANDING)
				 or ( sensore1=STANDING and sensore2=STANDING and sensore3=MODERATE)
				 or ( sensore1=STANDING and sensore2=MODERATE and sensore3=STANDING)
				 or ( sensore1=MODERATE and sensore2=STANDING and sensore3=STANDING)
			) then
			r_setRed[]	//questa regola include la transizione prima verso il giallo
			else
				if( (sensore1=MODERATE and sensore2=MODERATE) or (sensore2=MODERATE and sensore3=MODERATE) or (sensore1=MODERATE and sensore3=MODERATE) ) then
				r_setBlinkYellow[]	
				else //include i casi dove tutti i segnali sono diversi (caso per 3 sensori)
				r_setBlinkYellow[]
				endif
			endif
		endif
	endif

	main rule r_Main =
	if(override= false) then
		r_ProcessingSignals[]
	else
		r_Override[]
	endif
			
default init s0:
	function override = false
	function appling = false
	function semaforo = VERDE
	function sensore1= NOTRAFFIC
	function sensore2= NOTRAFFIC
	function sensore3= NOTRAFFIC
	
