/**
    KELAS     :
    KELOMPOK  :
    NAMA(NIM) : [nama][nim] , [nama][nim] , [nama][nim] , [nama][nim]
**/

#include <string>
#include "tanggal.h"


tanggal create_tanggal(int dd,int mm,int yy) {
    /**
    * fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;
    //=================================================
    // YOUR CODE STARTS HERE
    tgl.dd = dd;
    tgl.mm = mm;
    tgl.yy = yy;

    // YOUR CODE ENDS HERE
    //=================================================
    return tgl;
}

bool cek_tanggal(tanggal tgl) {
    /**
    * fungsi mengecek tanggal
    * fungsi mengembalikan nilai true jika isi tanggal sesuai dengan bulannya
    * fungsi mengembalikan nilai false jika isi tanggal atau bulan atau tahun salah
    **/
    bool ok = true;
    //=================================================
    // YOUR CODE STARTS HERE

    if ((tgl.mm == 1) && (tgl.dd < 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 2) && (tgl.dd < 28))
    {
        ok = true;
    }
    else if ((tgl.mm == 3) && (tgl.dd < 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 4) && (tgl.dd < 30))
    {
        ok = true;
    }
    else if ((tgl.mm == 5) && (tgl.dd < 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 6) && (tgl.dd < 30))
    {
        ok = true;
    }
    else if ((tgl.mm == 7) && (tgl.dd < 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 8) && (tgl.dd < 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 9) && (tgl.dd < 30))
    {
        ok = true;
    }
    else if ((tgl.mm == 10) && (tgl.dd < 31))
    {
        ok = true;
    }
    else if ((tgl.mm == 11) && (tgl.dd < 30))
    {
        ok = true;
    }
    else if ((tgl.mm == 12) && (tgl.dd < 31))
    {
        ok = true;
    }
    else
    {
        ok = false;
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return ok;
}

void tampil_tanggal(tanggal tgl) {
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << tgl.dd <<"/"<< tgl.mm <<"/"<< tgl.yy << endl;

    // YOUR CODE ENDS HERE
    //=================================================
}

int selisih_hari(tanggal tgl1, tanggal tgl2) {
    /**
    * fungsi menghitung selisih hari dari variable tgl1 dan tgl2
    * fungsi selalu mengembalikan selisih dalam nilai positif
    * syarat tahun tgl1 dan tgl2 harus sama
    * jika tahun pada tgl1 berbeda dengan tgl2, maka fungsi mengembalikan nilai -1
    **/
    int selisih = -1;
    //=================================================
    // YOUR CODE STARTS HERE
    if (tgl1.yy == tgl2.yy)
    {
        selisih = tgl2.dd - tgl1.dd;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
