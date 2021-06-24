package auto
import utente.Utente;

class Coupe(
  id: Int,
  anno: Int,
  potenza: Int,
  nposti: Int,
  prestato: Utente,
//parametri aggiuntivi
  a: Int,
  b: Int
)extends Auto(id, anno, potenza, nposti,prestato) {
  private var etaNoleggioMin=a
  private var classePrestazioni=b

  override def toString(): String = super.toString()+" EtaMinima:"+etaNoleggioMin+" Classe prestazioni:"+classePrestazioni
}