import java.util.Scanner;

public class MiPrograma 
{
    
    public static void main(String[]args)
    {
    
        System.out.println("Hola detective");
    
        Scanner teclado = new Scanner(System.in);
        System.out.print("¿Cual es tu nombre?");
        String nombre = teclado.nextLine();
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Bienvenido,"+nombre);
    
        System.out.println("Los sospechosos son:");
        System.out.println("1. Victoria Mendoza.");
        System.out.println("2. Aurelio Vasquez.");
        System.out.println("3. Simon Quiroga.");
        System.out.println("4. Bruno");
        
        
                
        System.out.println("¿Cuantas pistas encontraste?");
        int pistas = sc.nextInt();
                
            if(pistas >=5){      
             System.out.println("Eres un detective EXPERTO");
             System.out.println("Puedes resolver el caso ");
            }
            else if(pistas >=3){    
             System.out.println("Buen trabajo, detective");
             System.out.println("Necesitas una pista mas ");
            }
            else if(pistas >=1){    
             System.out.println("Vas por buen camino");
             System.out.println("Sigue investigando ");
            }
            else if(pistas >=0){
             System.out.println("No puedes tener 0 pistas necesitas almenos una.");
             System.out.println("Investiga mas.");
            }
            else {   
             System.out.println("Vas por buen camino");
             System.out.println("Sigue investigando ");
            }
            
                System.out.println("Cual es tu edad?");
                int edad = sc.nextInt();
                
                    if (edad<12){
                    System.out.println("Eres muy joven para ser detective.");
                    }
                    else if (edad>=12 && edad<=17){
                    System.out.println("Puedes ser detective junior");
                    }
                    else if (edad>=17 && edad<=59){
                    System.out.println("Bienvenido al equipo de detectives");
                    }
                    else
                    {
                        System.out.println("Detective senior con experiencia");
                    }
    } 
}
