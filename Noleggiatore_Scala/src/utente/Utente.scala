package utente

class Utente(var nome: String, var idUtente: Int, var eta: Int) extends UtenteModel 
{
  def getNome(): String = nome
  def getEta(): Int = eta
  def getID(): Int = idUtente
  

	override def toString(): String = {
	  return "Utente: " + nome + ", id: " + idUtente + ", eta: " + eta;
	}
}