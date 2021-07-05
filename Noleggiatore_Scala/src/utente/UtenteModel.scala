package utente

import auto.Mezzo;

trait UtenteModel {
  def nome: String;
  def idUtente: Int;
  def eta: Int;
  
  def getEta(): Int;
  def getID(): Int;
  //def prende(a: Mezzo);
  //def restituisce(a: Mezzo);
}