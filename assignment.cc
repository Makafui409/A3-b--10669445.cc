#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Please enter your score"<<endl;
	cin>>score;
	
	 switch (score)
	{
    	
    	default:
    		cout<<"This is an invalid input "<<endl;
    		break;
    		
    		case 80 ... 100:
    			cout<<"You had an A"<<endl;
    			break;
    			
    			case 75 ... 79:
    				cout<<"You had a B+"<<endl;
    				break;
    				
    				case 70 ... 74:
    					cout<<"You had a B"<<endl;
    					break;
						
						case 65 ... 69:
							cout<<"You had a C+"<<endl;
							break;
							
							case 60 ... 64:
								cout<<"You had a C"<<endl;
								break;
								
								case 55 ... 59:
									cout<<"You had a D+"<<endl;
									break;
									
									case 50 ... 54:
										cout<<"You had a D"<<endl;
										break;
										
										case 45 ... 49:
											cout<<"You had an E"<<endl;
											cout<<"Please resit this course!"<<endl;
											break;
											
											case 0 ... 44:
												cout<<"You had an F"<<endl;
												cout<<"Please resit this course!"<<endl;
												break;
											
											
					
		
	}
	return 0;
}
