package auto
import utente.Utente;

class Commerciale(
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
)extends Auto(id, anno, potenza, nposti, prestato) {
  private var capCarico =a
  private var patente=b 
  private var carburante=c
  private var classeDimensioni=d

  override def toString(): String = super.toString()+" Capacità di carico:"+capCarico+" Patente:"+patente+" Carburante:"+carburante+" Classe dimensioni:"+classeDimensioni
}