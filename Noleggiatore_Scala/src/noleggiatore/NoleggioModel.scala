package noleggiatore

import auto.Mezzo;
import utente.Utente;

trait NoleggioModel {
  private var listaMezzi=List[Mezzo]();
  private var listaUtenti=List[Utente]();

  def inseriscoMezzo(m: Mezzo): Unit;
  def inseriscoUtente(u: Utente): Unit;
  def printUtenti(): Unit;
  def printMezzi(): Unit;
  def printNoleggiAttivi(): Unit;
  def prestaMezzo(m: Mezzo, u: Utente): Unit;
  def riprendeMezzo(m: Mezzo, u: Utente): Unit;
}