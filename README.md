# Searchaccount
端末から 5 人分の学籍番号 (数値) とアカウント名 (8 文字の文字列) の組を受けとって記憶し、その後に端末 から入力される学籍番号が記憶されていればそれに対応したアカウント名を、記憶されていなければ no data を 表示するプログラム。  
  
入出力例    
  
gcc -Wall -std=c99 -o searchaccount searchaccount.c  
./searchaccount
1611001 a1611001  
1611002 b1611002  
1611003 c1611003  
1611004 d1611004  
1611005 e1611005  
1611004  
1611006  
1611001 　　　　　　　　　　　　　　#入力はこの行まで  
d1611004  
no data  
a1611001  
  
