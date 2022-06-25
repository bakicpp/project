import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: "Mesajlaşma Uygulaması",
      home: Iskele(),
    );
  }
}

class Iskele extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.teal,
      appBar: AppBar(
        backgroundColor: Colors.green,
        title: Text("Mesajlaşma Uygulaması Arayüzü"),
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
  @override
  TextEditingController t1 = TextEditingController();
  List mesajListesi = [];

  mesajEkle(String metin) {
    setState(() {
      mesajListesi.insert(0, t1.text);
      t1.clear();
    });
  }

  Widget build(BuildContext context) {
    return Container(
      margin: EdgeInsets.all(20),
      child: Column(
        children: [
          Flexible(
            child: ListView.builder(
                reverse: true,
                itemCount: (mesajListesi.length),
                itemBuilder: (context, int indeksNumarasi) =>
                    Text(mesajListesi[indeksNumarasi])),
          ),
          Row(
            children: [
              Flexible(
                child: TextField(
                  onSubmitted: mesajEkle,
                  controller: t1,
                ),
              ),
              RaisedButton(
                onPressed: mesajEkle(t1.text),
                child: Text("Gönder"),
              ),
            ],
          ),
        ],
      ),
    );
  }
}
