package auto

import utente.Utente;

abstract class Mezzo(
  a: Int, 
  b: Int,
  c: Int, 
  d: Int,
  e: Utente)  
{
var id=a
var anno=b
var potenza=c
var nposti=d
var prestato=e
 
def getID(): Int = id
def getAnno(): Int = anno
def getPosti(): Int = nposti
def getPotenza(): Int= potenza

def prestaA(u: Utente): Unit = {
	if (prestato != null) {
		println("il mezzo è gia noleggiato");
    return;
    }
		prestato = u;
	}

override def toString(): String= "ID mezzo: "+id+" anno Immatricolazione: "+anno+
  " nposti:"+nposti+" di CV: "+potenza+" prestato A: "+prestato+"\n"

 
}