//
//  main.cpp
//  Odevdenemesi
//
//  Created by Veysel on 21.11.2018.
//  Copyright © 2018 Veysel. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
char uyari(string ifade){
	stack<char>t;
	for (int i=0; i<ifade.length(); i++) {
		switch (ifade[i]) {
			case '(':
				t.push(ifade[i]);
				break;
			case')':
				if(t.size()==0||t.top()!='(')
					return ')';
				else
					t.pop();
		}
	}
if(t.size()>0)
	return  t.top();
	else
		return '-';
}

int main(int argc, const char * argv[]) {
	string ifade="";
	cout<<"Ifade girin";
	cin>>ifade;
	
	switch (uyari(ifade)) {
		case'-':
			cout<<"Ifade de parantez hatasi yok ";
			break;
		case'(':
			cout<<"Ifade de  ) hatasi var ";
			break;
		case')':
			cout<<"Ifade de ( hatasi var ";
			break;
			
		
	}
	
	return 0;
}
