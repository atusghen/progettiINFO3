package auto
import utente.Utente;

class Auto (
  id: Int,
  anno: Int,
  potenza: Int,
  nposti: Int,
  prestato: Utente
  )extends Mezzo(id,anno,potenza,nposti,prestato) 
{

  override def toString(): String = 
  "Tipo: Auto "+super.toString

}