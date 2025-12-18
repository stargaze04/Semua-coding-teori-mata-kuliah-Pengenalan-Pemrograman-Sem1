// mendeklarasikan variabel bilangan dengan tipe string
String bilangan;
// mendeklarasikan variabel lain
String kiri, tengah, kanan;
Scanner input_program = new Scanner (System.in);
System.out.print("Masukan suatu bilangan : ");
bilangan = input_program.nextLine();
System.out.println("Bilangan Anda : " + bilangan);
// cara yang digunakan di sini masih menggunakan
// cara praktis namun kurang efisien
// mengambil karakter paling kiri
kiri = bilangan.substring(0,1);
// mengambil karakter yang di tengah
tengah = bilangan.substring(1,2);
// mengambil karakter paling kanan
kanan = bilangan.substring(2,3);
System.out.println("Hasil membalik bilangan");
// mencetaknya dibalik: kanan, tengan, kiri
System.out.println(kanan+tengah+kiri);
