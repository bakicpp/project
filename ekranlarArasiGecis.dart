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
  girisYap() {
    Navigator.pushNamed(context, "/ProfilSayfasiRotasi");
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text("Giriş Ekranı"),
      ),
      body: Center(
        child: Container(
          child: Column(
            children: [
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
            )
          ],
        ),
      ),
    );
  }
}
