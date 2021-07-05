import auto._;
import utente._;
import noleggiatore.Noleggio;

object Main {
  def main(args: Array[String]): Unit = {

    val auto1=new Utilitaria(1,2005,90,4,null,9000,"Fiat","Panda","Benzina","A")
    val auto2=new Utilitaria(2,2005,90,4,null,9000,"Fiat","Tipo","Benzina","A")
    val auto3=new Utilitaria(2,2005,90,4,null,9000,"Fiat","Punto","Benzina","A")
    val nome2 = new Utente("nome2", 2, 78);
		val nome3 = new Utente("nome3", 3, 34);
		val nome4 = new Utente("nome4", 4, 26);
    println("inserisco utenti e mezzi")
    Noleggio.inseriscoUtente(nome2);
    Noleggio.inseriscoUtente(nome3);
    Noleggio.inseriscoUtente(nome4);
    Noleggio.inseriscoMezzo(auto1);
    Noleggio.inseriscoMezzo(auto2);
    Noleggio.inseriscoMezzo(auto3);
    println()
    println("stampo la lista dei mezzi inserita")
    Noleggio.printMezzi()
    println()

    println("stampo la lista degli utenti inserita")
    Noleggio.printUtenti()
    println()
    
    println("presto auto1 a nome2 e stampo")
    Noleggio.prestaMezzo(auto1,nome2);
    Noleggio.printMezzi()
    println()

    println("stampo tutti i mezzi prestati")
    Noleggio.printNoleggiAttivi();
    println()

    println("riprendo da nome2, auto1 e stampo")
    Noleggio.riprendeMezzo(auto1,nome2);
    Noleggio.printMezzi()
    println()

    println("stampo tutti i mezzi prestati")
    Noleggio.printNoleggiAttivi();
    println()
  }
}
