import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      initialRoute: "/",
      routes: {
        "/": (context) => GirisEkrani(),
        "/ProfilSayfasiRotasi": (context) => ProfilSayfasi(),
      },
    );
  }
}

class GirisEkrani extends StatefulWidget {
  @override
  State<GirisEkrani> createState() => _GirisEkraniState();
}

class _GirisEkraniState extends State<GirisEkrani> {
  TextEditingController t1 = TextEditingController();
  TextEditingController t2 = TextEditingController();

  girisYap() {
    if (t1.text == "admin" && t2.text == "1234") {
      Navigator.pushNamed(context, "/ProfilSayfasiRotasi",
          arguments: VeriModeli(kullaniciAdi: t1.text, sifre: t2.text));
    } //if

    else {
      showDialog(
          context: context,
          builder: (BuildContext context) {
            return AlertDialog(
              title: new Text("Yanlış kullancı adı veya şifre!"),
              content: new Text("Lütfen giriş bilgilerinizi gözden geçirin."),
              actions: [
                new FlatButton(
                  child: new Text("Kapat"),
                  onPressed: () {
                    Navigator.of(context).pop();
                  },
                ),
              ],
            );
          }); //showDialog

    } //else
  } //class

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Giriş Ekranı"),
      ),
      body: Center(
        child: Container(
          margin: EdgeInsets.fromLTRB(50, 200, 50, 100),
          child: Column(
            children: [
              Text("Hoşgeldin!"),
              TextFormField(
                  decoration: InputDecoration(hintText: "Kullanıcı Adı"),
                  controller: t1),
              TextFormField(
                  decoration: InputDecoration(hintText: "Şifre"),
                  controller: t2),
              RaisedButton(
                onPressed: girisYap,
                child: Text("Giriş Yap"),
              )
            ],
          ),
        ),
      ),
    );
  }
}

class ProfilSayfasi extends StatefulWidget {
  @override
  State<ProfilSayfasi> createState() => _ProfilSayfasiState();
}

class _ProfilSayfasiState extends State<ProfilSayfasi> {
  cikisYap() {
    Navigator.pop(context);
  }

  @override
  Widget build(BuildContext context) {
    VeriModeli iletilenArgumanlar =
        ModalRoute.of(context)!.settings.arguments as VeriModeli;

    return Scaffold(
      appBar: AppBar(
        title: Text("Profil Sayfası"),
      ),
      body: Container(
        child: Column(
          children: [
            RaisedButton(
              onPressed: cikisYap,
              child: Text("Çıkış Yap"),
            ),
            Text(iletilenArgumanlar.kullaniciAdi),
            Text(iletilenArgumanlar.sifre),
          ],
        ),
      ),
    );
  }
}

class VeriModeli {
  String kullaniciAdi, sifre;
  VeriModeli({required this.kullaniciAdi, required this.sifre});
}
