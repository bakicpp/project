import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:firebase_core/firebase_core.dart';

Future<void> main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp();
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Iskele(),
    );
  }
}

class Iskele extends StatefulWidget {
  @override
  State<Iskele> createState() => _IskeleState();
}

class _IskeleState extends State<Iskele> {
  TextEditingController t1 = TextEditingController();

  TextEditingController t2 = TextEditingController();

  var gelenYaziBasligi = "";
  var gelenYaziIcerigi = "";

  yaziEkle() {
    FirebaseFirestore.instance
        .collection("Yazilar")
        .doc(t1.text)
        .set({"baslik": t1.text, "icerik": t2.text});
  }

  yaziGuncelle() {
    FirebaseFirestore.instance
        .collection("Yazilar")
        .doc(t1.text)
        .update({"baslik": t1.text, "icerik": t2.text});
  }

  yaziSil() {
    FirebaseFirestore.instance.collection("Yazilar").doc(t1.text).delete();
  }

  yaziGetir() {
    FirebaseFirestore.instance
        .collection("Yazilar")
        .doc(t1.text)
        .get()
        .then((gelenVeri) {
      setState(() {
        gelenYaziBasligi = gelenVeri.data()!['baslik'];
        gelenYaziIcerigi = gelenVeri.data()!['icerik'];
      });
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Container(
        margin: EdgeInsets.all(50),
        child: Center(
          child: Column(
            children: [
              TextField(
                controller: t1,
              ),
              TextField(
                controller: t2,
              ),
              Row(
                children: [
                  RaisedButton(child: Text("Ekle"), onPressed: yaziEkle),
                  RaisedButton(
                      child: Text("Güncelle"), onPressed: yaziGuncelle),
                  RaisedButton(child: Text("Sil"), onPressed: yaziSil),
                  RaisedButton(child: Text("Yazı Getir"), onPressed: yaziGetir)
                ],
              ),
              ListTile(
                title: Text(gelenYaziBasligi),
                subtitle: Text(gelenYaziIcerigi),
              )
            ],
          ),
        ),
      ),
    );
  }
}
