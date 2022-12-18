/* 
Program Kalkulator Matriks Tugas Praktikum 8 :
Nama    : Emil Maulana
Kelas   : 1C Informatika
NPM     : 2210631170019
*/

#include <iostream>

using namespace std;

	int i, j, m, n, matriks1[2][2], matriks2[2][2], matriks[10][10], transpose[10][10], hasil[2][2];


//function untuk membuat garis
garis(){
    cout <<" ============================================================================ ";
    cout <<endl;
}

//function header
header(){
    garis();
    cout << " \t\t\t Program Kalkulator Matriks " <<endl;
    cout<<endl;
    cout << " Nama : Emil Maulana \t Kelas : 1C Informatika \t NPM : 2210631170019 " <<endl;
    garis();
}

//function untuk penjumlahan matriks
penjumlahanMatriks(){
	
	//PENJUMLAHAN
	cout << " [1]. PENJUMLAHAN\n"<<endl;
	cout << " Masukan angka untuk matriks pertama "<< endl;
	for (m=0; m<2; m++){
		for (n=0; n<2; n++){
			cout<<" Baris "<<m+1 <<" Kolom "<< n+1 << " = ";
			cin>> matriks1[m][n];
		}
		cout << endl;
	}
	cout << " Masukan angka untuk matriks kedua\n"<< endl;
	for (m=0; m<2; m++){
		for (n=0; n<2; n++){
			cout << " Baris "<< m+1<< " Kolom "<< n+1 << " = ";
			cin >> matriks2[m][n];
		}
		cout << endl;
	}
	
	cout << " Matriks pertama adalah\n";
	for ( m=0; m<2; m++){
		for ( n=0; n<2; n++){
			cout <<" "<< matriks1[m][n]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << " Matriks kedua adalah\n";
	for ( m=0; m<2; m++){
		for (n=0; n<2; n++){
			cout <<" "<< matriks2[m][n]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << " Hasil dari penjumlahan matriks 1 dan 2 adalah :"<< endl;
	for (m=0; m<2; m++){
		for (n=0; n<2; n++){
			hasil[m][n]= matriks1[m][n] + matriks2[m][n];
			cout <<" "<< hasil[m][n]<< "   ";
		} cout << endl;
	} 
	
}

//function untuk mengalikan matriks

perkalianMatriks(){
	
	cout << " [2]. PERKALIAN \n"<<endl;
	
	cout << " Masukan angka untuk matriks pertama "<< endl;
	for (m=0; m<2; m++){
		for (n=0; n<2; n++){
			cout<<" Baris "<<m+1 <<" Kolom "<< n+1 << " = ";
			cin>> matriks1[m][n];
		}
		cout << endl;
	}
	cout << " Masukan angka untuk matriks kedua\n"<< endl;
	for (m=0; m<2; m++){
		for (n=0; n<2; n++){
			cout << " Baris "<< m+1<< " Kolom "<< n+1 << " = ";
			cin >> matriks2[m][n];
		}
		cout << endl;
	}
	
	cout << " Matriks pertama adalah\n";
	for ( m=0; m<2; m++){
		for ( n=0; n<2; n++){
			cout <<" "<< matriks1[m][n]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << " Matriks kedua adalah\n";
	for ( m=0; m<2; m++){
		for (n=0; n<2; n++){
			cout <<" "<< matriks2[m][n]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << " Hasil dari perkalian matriks 1 dan 2 adalah :"<< endl;
	for (m=0; m<2; m++){
		for (n=0; n<2; n++){
			hasil[m][n]= matriks1[m][n] * matriks2[m][n];
			cout <<" "<< hasil[m][n]<< "   ";
		} cout << endl;
	} 
}

transposeMatriks(){
	
	cout << " Masukkan jumlah baris matriks : ";
	cin >> m;
	cout << " Masukkan jumlah kolom matriks : ";
	cin >> n;
	cout << " Masukkan elemen matriks : \n";
	
	for (i = 0; i < m; i++){
	    for (j = 0; j < n; j++){
	      cout<< " ";cin  >> matriks[i][j];
	    }
	}
	
	for (i = 0; i < m; i++){
	    for (j = 0; j < n; j++){
	      transpose[j][i] = matriks[i][j];
	    }
	}
	  
	  cout <<" Hasil Transpose Matriks : \n";
	for (i = 0; i < n; i++){
	    for (j = 0; j < m; j++){
	      cout <<" "<< transpose[i][j] << "\t";
	    }
	    cout << endl;
	}
}

main(){
	
	int menu, menu_2;
	
	menu :
		
		system("cls");
		
		header();
		
		cout <<" [1] Penjumlahan Matriks" <<endl;
		cout <<" [2] Perkalian Matriks" <<endl;
		cout <<" [3] Transpose Matriks "<<endl;
		cout <<" [4] Keluar " <<endl;
		cout<<endl;
		cout <<" Pilih Menu [1][2][3][4] : ";
    	cin >>menu;
    	
    	switch (menu){
    		case 1 :
	    		
	    		penjumlahan :
	    			system("cls");
	    			header();
	        		cout <<endl;
	        		garis();
	        		
	        		penjumlahanMatriks();
	        		cout << endl;
	        		
	        		garis();
			        cout << " Pilihan : " <<endl;
			        cout << " [7] = Kembali ke penjumlahan matriks " <<endl;
			        cout << " [8] = Kembali ke menu utama " << endl;
			        cout << " [9] = Keluar dari program " << endl;
			        cout << " Apakah anda ingin melakukan penjumlahan matriks lagi ? [7][8][9] : ";
			        cin >> menu_2;
			        
			        if( menu_2 == 7){
						goto penjumlahan;
					}else if( menu_2 == 8 ){
						goto menu;
					}else if( menu_2 == 9){
						exit(0);
					}else{
						garis();
						cout<<" Pilihan Tidak Tersedia ";
					}
	        break;
	        case 2 :
	        	perkalian :
	        		system("cls");
	        		header();
	        		cout<<endl;
	        		garis();
	        		
	        		perkalianMatriks();
	        		cout<<endl;
	        		
	        		garis();
			        cout << " Pilihan : " <<endl;
			        cout << " [7] = Kembali ke perkalian matriks " <<endl;
			        cout << " [8] = Kembali ke menu utama " << endl;
			        cout << " [9] = Keluar dari program " << endl;
			        cout << " Apakah anda ingin melakukan perkalian matriks lagi ? [7][8][9] : ";
			        cin >> menu_2;
			        
			        if( menu_2 == 7){
						goto perkalian;
					}else if( menu_2 == 8 ){
						goto menu;
					}else if( menu_2 == 9){
						exit(0);
					}else{
						garis();
						cout<<" Pilihan Tidak Tersedia ";
					}
			break;
			case 3 :
				transpose :
					system("cls");
	        		header();
	        		cout<<endl;
	        		garis();
	        		
	        		transposeMatriks();
	        		cout<<endl;
	        		
	        		garis();
			        cout << " Pilihan : " <<endl;
			        cout << " [7] = Kembali ke transpose matriks " <<endl;
			        cout << " [8] = Kembali ke menu utama " << endl;
			        cout << " [9] = Keluar dari program " << endl;
			        cout << " Apakah anda ingin melakukan transpose matriks lagi ? [7][8][9] : ";
			        cin >> menu_2;
			        
			        if( menu_2 == 7){
						goto transpose;
					}else if( menu_2 == 8 ){
						goto menu;
					}else if( menu_2 == 9){
						exit(0);
					}else{
						garis();
						cout<<" Pilihan Tidak Tersedia ";
					}
			break;
			default :
				cout <<"\t\t\t Menu Yang Anda Pilih Tidak Tersedia !!!" <<endl;
			break;
					
		}
		
	
}
