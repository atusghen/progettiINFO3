package noleggiatore

import auto.Mezzo;
import utente.Utente;

object Noleggio extends NoleggioModel{
  private var listaMezzi= List[Mezzo]()
  private var listaUtenti= List[Utente]()

  def printUtenti(): Unit = listaUtenti.foreach(println)
  def printMezzi(): Unit = listaMezzi.foreach(println)

  def inseriscoMezzo(m: Mezzo): Unit =  
    if (listaMezzi.map(mezzo => mezzo.id).contains(m.getID)) println("duplicate ID") else listaMezzi = m :: listaMezzi
  
  def inseriscoUtente(u: Utente): Unit =
    if (listaUtenti.map(utente => utente.idUtente).contains(u.getID)) println("duplicate ID") else listaUtenti = u :: listaUtenti

  def printNoleggiAttivi(): Unit= {
    var a=listaMezzi.filter(mezzo => mezzo.prestato!=null)
    if(a.length==0) println("lista vuota: nessun noleggio attivo") else a.foreach(println)
  }
  
  def prestaMezzo(m: Mezzo, a: Utente): Unit =
  {
    for(u: Utente <- listaUtenti)
    {
      if (u.getID() == a.getID()){  m.prestato=a; return;}
		}
		println("Utente non trovato");
  }

  def riprendeMezzo(m: Mezzo, a: Utente): Unit = 
  {
    for(u: Utente <- listaUtenti)
    {
			if (u.getID() == a.getID()){	m.prestato = null;	return;	}
		}
		println("Utente non trovato");
  }

}




