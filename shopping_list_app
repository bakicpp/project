import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: "ToDo Uygulaması",
      home: Iskele(),
    );
  }
}

class Iskele extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Colors.green,
        title: Text("Alışveriş Listesi Uygulaması"),
      ),
      body: AnaEkran(),
    );
  }
}

class AnaEkran extends StatefulWidget {
  @override
  State<AnaEkran> createState() => _AnaEkranState();
}

class _AnaEkranState extends State<AnaEkran> {
  TextEditingController t1 = TextEditingController();
  List alisverisListesi = [];

  elemanEkle() {
    setState(() {
      alisverisListesi.add(t1.text);
      t1.clear();
    });
  }

  elemanCikar() {
    setState(() {
      alisverisListesi.remove(t1.text);
      t1.clear();
    });
  }

  @override
  Widget build(BuildContext context) {
    return Container(
      child: Column(
        children: [
          Flexible(
              child: ListView.builder(
                  itemCount: alisverisListesi.length,
                  itemBuilder: (context, indeksNumarasi) => ListTile(
                        subtitle: Text("Alışveriş Melzemeleri"),
                        title: Text(alisverisListesi[indeksNumarasi]),
                      ))),
          TextField(
            controller: t1,
          ),
          RaisedButton(
            onPressed: elemanEkle,
            child: Text("Ekle"),
          ),
          RaisedButton(
            onPressed: elemanCikar,
            child: Text("Çıkar"),
          ),
        ],
      ),
    );
  }
}
