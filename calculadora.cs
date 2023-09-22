using System;

namespace calculadora
{
    class program
    {
        static void Main()
        {
            int resultado, primeiro_numero, segundo_numero, escolha, finalizar = 1;

            while(finalizar != 0)
            {
                Console.Clear();
                Console.WriteLine("Digite o numero da operação desejada\n[0]Finalizar\t[1] Adição\t[2] Subtração\t[3] Divisão\t[4] Multiplicação\n");

                Console.Write("Resposta: ");
                escolha = int.Parse(Console.ReadLine());

                

                switch(escolha)
                {
                    case 1:
                        Console.Clear();

                        Console.Write("Digite o primeiro numero: ");
                        primeiro_numero = int.Parse(Console.ReadLine());

                        Console.Write("Digite o segundo numero: ");
                        segundo_numero = int.Parse(Console.ReadLine());

                        resultado = primeiro_numero + segundo_numero;

                        Console.Clear();
                        Console.WriteLine("Resultado: {0}\n\nAperte ENTER para prosseguir", resultado);
                        Console.ReadLine();
                    break;

                    case 2:
                        Console.Clear();

                        Console.Write("Digite o primeiro numero: ");
                        primeiro_numero = int.Parse(Console.ReadLine());

                        Console.Write("Digite o segundo numero: ");
                        segundo_numero = int.Parse(Console.ReadLine());

                        resultado = primeiro_numero - segundo_numero;

                        Console.Clear();
                        Console.WriteLine("Resultado: {0}\n\nAperte ENTER para prosseguir", resultado);
                        Console.ReadLine();
                    break;

                    case 3:
                        Console.Clear();

                        Console.Write("Digite o primeiro numero: ");
                         float primeiro_numero_f = float.Parse(Console.ReadLine());

                        Console.Write("Digite o segundo numero: ");
                         float segundo_numero_f = float.Parse(Console.ReadLine());

                        float resultado_f = primeiro_numero_f / segundo_numero_f;

                        Console.Clear();
                        Console.WriteLine("Resultado: {0}\n\nAperte ENTER para prosseguir", resultado_f);
                        Console.ReadLine();
                    break;

                     case 4:
                        Console.Clear();

                        Console.Write("Digite o primeiro numero: ");
                        primeiro_numero = int.Parse(Console.ReadLine());

                        Console.Write("Digite o segundo numero: ");
                        segundo_numero = int.Parse(Console.ReadLine());

                        resultado = primeiro_numero * segundo_numero;

                        Console.Clear();
                        Console.WriteLine("Resultado: {0}\n\nAperte ENTER para prosseguir", resultado);
                        Console.ReadLine();
                    break;
                }
                
                if(escolha != 0)
                {
                    Console.WriteLine("Deseja fazer outra conta?\n[0] não\t[1] sim");
                    Console.Write("Resposta: ");
                    finalizar = int.Parse(Console.ReadLine());
                }

                else
                {
                    finalizar = 0;
                }
            }


            Console.Clear();
            Console.WriteLine("Programa finalizado com sucesso");

        }
    }
}