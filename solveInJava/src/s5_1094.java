import java.awt.*;
import java.util.ArrayList;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.Scanner;

public class s5_1094 {
    static Scanner scanner = new Scanner(System.in);
    public s5_1094 (){
        int stick = 64;
        int stickCount = 0;
        int X;  // 원하는 길이
        X = scanner.nextInt();

        while(X > 0){
            if(stick > X){
                stick /= 2;
            } else{
                stickCount++;
                X -= stick;
            }
        }
        System.out.println(stickCount);
    }
}

/*

막대를 자르는 가장 쉬운 방법은 절반으로 자르는 것이다.
지민이는 아래와 같은 과정을 거쳐서 막대를 자르려고 한다.

지민이가 가지고 있는 막대의 길이를 모두 더한다.
처음에는 64cm 막대 하나만 가지고 있다. 이때, 합이 X보다 크다면, 아래와 같은 과정을 반복한다.
가지고 있는 막대 중 길이가 가장 짧은 것을 절반으로 자른다.
만약, 위에서 자른 막대의 절반 중 하나를 버리고
남아있는 막대의 길이의 합이 X보다 크거나 같다면, 위에서 자른 막대의 절반 중 하나를 버린다.
이제, 남아있는 모든 막대를 풀로 붙여서 Xcm를 만든다.
X가 주어졌을 때, 위의 과정을 거친다면, 몇 개의
막대를 풀로 붙여서 Xcm를 만들 수 있는지 구하는 프로그램을 작성하시오.


 */