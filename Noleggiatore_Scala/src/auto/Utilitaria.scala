package auto
import utente.Utente;

class Utilitaria(
  id: Int, 
  anno: Int, 
  potenza: Int, 
  nposti: Int, 
  prestato: Utente,
//parametri aggiuntivi
  a: Int,
  b: String,
  c: String,
  d: String,
  e: String,
)extends Auto(id, anno, potenza, nposti, prestato) {
  private var valore =a
  private var marca=b 
  private var modello=c
  private var carburante=d
  private var tipo=e

  override def toString(): String = super.toString()+" Valore:"+valore+" Marca:"+marca+" Modello:"+modello+" Carb:"+carburante+" tipo:"+tipo
}