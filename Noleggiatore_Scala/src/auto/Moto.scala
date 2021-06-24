package auto
import utente.Utente;

class Moto (
  id: Int, 
  anno: Int, 
  potenza: Int, 
  nposti: Int, 
  prestato: Utente,
  //parametri aggiuntivi
  a: String,
)extends Mezzo(id,anno,potenza,nposti,prestato)
{
  val cilindrata=a
  override def toString(): String = 
  "Tipo: Moto "+super.toString+" Cilindrata: "+cilindrata
}