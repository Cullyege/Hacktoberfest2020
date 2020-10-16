public IntStack()
{
    stack = new int[100];
    index = -1;
}

public void push(int x)
{
    stack[index + 1] = x;
    index++;
}

public int pop()
{
    if (index == -1)
    {
        return -1;
    }
    int num = stack[index];
    index--;
    return num;
}

public int peek()
{
    if (index == -1)
    {
        return 0;
    }
    return stack[index];
}
}


import java.util.Scanner;

public class MolecularMass
{
 private static IntStack stack;

public static void main(String[] args)
{
stack = new IntStack();
Scanner kb = new Scanner(System.in);
System.out.print("Enter the molecule: ");
String input = kb.nextLine();
int result = evaluate(input);
System.out.println("The Molecular Mass of " + input +  " is " + result);
}

public static int evaluate(String s)
{
int answer = 0;
int num = 0;

for(int i = 0; i < s.length(); i++)
{
  char c = s.charAt(i);
  switch(c)
  {
    case '2':
      num = stack.pop();
      num *= 2;
      stack.push(num);
      break;
    case '3':
      num = stack.pop();
      num *= 3;
      stack.push(num);
      break;
    case '4':
      num = stack.pop();
      num *= 4;
      stack.push(num);
      break;
    case '5':
      num = stack.pop();
      num *= 5;
      stack.push(num);
      break;
    case '6':
      num = stack.pop();
      num *= 6;
      stack.push(num);
      break;
    case '7':
      num = stack.pop();
      num *= 7;
      stack.push(num);
      break;
    case '8':
      num = stack.pop();
      num *= 8;
      stack.push(num);
      break;
    case '9':
      num = stack.pop();
      num *= 9;
      stack.push(num);
      break;
    case 'C':
      stack.push(12);
      break;
    case 'H':
      stack.push(1);
      break;
    case 'O':
      stack.push(16);
      break;
    case '(':
      stack.push(0);
      break;
    case ')':
      int result = 0;
      while(stack.peek() != 0)
      {
        result += stack.pop();
      }
      int throwaway = stack.pop();
      stack.push(result);
      break;
    default:
      break;
  }
}

for(int i = 0; i < stack.index; i++)
{
  answer += stack.pop();
}

return answer;
}
}