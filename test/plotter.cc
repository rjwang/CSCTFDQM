//
//
//

void plotter(TString file, TString runTag)
{

    TFile *infile = TFile::Open(file, "READ");

    vector<TString> Project2Dhists;
    Project2Dhists.push_back("CSC_LCT_GblPhi");
    Project2Dhists.push_back("CSC_LCT_LocalPhi");
    Project2Dhists.push_back("CSC_LCT_PackedPhi");
    Project2Dhists.push_back("CSC_Strip");
    Project2Dhists.push_back("CSC_Wire");


    vector<TString> All2Dhists;
    All2Dhists.push_back("CSCTF_LCT");


    vector<TString> All2DHist_ChamberList;
    All2DHist_ChamberList.push_back("lct_MEplus11");
    All2DHist_ChamberList.push_back("lct_MEplus12");
    All2DHist_ChamberList.push_back("lct_MEplus13");
    All2DHist_ChamberList.push_back("lct_MEplus21");
    All2DHist_ChamberList.push_back("lct_MEplus22");
    All2DHist_ChamberList.push_back("lct_MEplus31");
    All2DHist_ChamberList.push_back("lct_MEplus32");
    All2DHist_ChamberList.push_back("lct_MEplus41");
    All2DHist_ChamberList.push_back("lct_MEplus42");

    All2DHist_ChamberList.push_back("lct_MEminus11");
    All2DHist_ChamberList.push_back("lct_MEminus12");
    All2DHist_ChamberList.push_back("lct_MEminus13");
    All2DHist_ChamberList.push_back("lct_MEminus21");
    All2DHist_ChamberList.push_back("lct_MEminus22");
    All2DHist_ChamberList.push_back("lct_MEminus31");
    All2DHist_ChamberList.push_back("lct_MEminus32");
    All2DHist_ChamberList.push_back("lct_MEminus41");
    All2DHist_ChamberList.push_back("lct_MEminus42");


    All2DHist_ChamberList.push_back("csc_strip_MEplus11");
    All2DHist_ChamberList.push_back("csc_strip_MEplus12");
    All2DHist_ChamberList.push_back("csc_strip_MEplus13");
    All2DHist_ChamberList.push_back("csc_strip_MEplus21");
    All2DHist_ChamberList.push_back("csc_strip_MEplus22");
    All2DHist_ChamberList.push_back("csc_strip_MEplus31");
    All2DHist_ChamberList.push_back("csc_strip_MEplus32");
    All2DHist_ChamberList.push_back("csc_strip_MEplus41");
    All2DHist_ChamberList.push_back("csc_strip_MEplus42");

    All2DHist_ChamberList.push_back("csc_strip_MEminus11");
    All2DHist_ChamberList.push_back("csc_strip_MEminus12");
    All2DHist_ChamberList.push_back("csc_strip_MEminus13");
    All2DHist_ChamberList.push_back("csc_strip_MEminus21");
    All2DHist_ChamberList.push_back("csc_strip_MEminus22");
    All2DHist_ChamberList.push_back("csc_strip_MEminus31");
    All2DHist_ChamberList.push_back("csc_strip_MEminus32");
    All2DHist_ChamberList.push_back("csc_strip_MEminus41");
    All2DHist_ChamberList.push_back("csc_strip_MEminus42");


    All2DHist_ChamberList.push_back("csc_wire_MEplus11");
    All2DHist_ChamberList.push_back("csc_wire_MEplus12");
    All2DHist_ChamberList.push_back("csc_wire_MEplus13");
    All2DHist_ChamberList.push_back("csc_wire_MEplus21");
    All2DHist_ChamberList.push_back("csc_wire_MEplus22");
    All2DHist_ChamberList.push_back("csc_wire_MEplus31");
    All2DHist_ChamberList.push_back("csc_wire_MEplus32");
    All2DHist_ChamberList.push_back("csc_wire_MEplus41");
    All2DHist_ChamberList.push_back("csc_wire_MEplus42");

    All2DHist_ChamberList.push_back("csc_wire_MEminus11");
    All2DHist_ChamberList.push_back("csc_wire_MEminus12");
    All2DHist_ChamberList.push_back("csc_wire_MEminus13");
    All2DHist_ChamberList.push_back("csc_wire_MEminus21");
    All2DHist_ChamberList.push_back("csc_wire_MEminus22");
    All2DHist_ChamberList.push_back("csc_wire_MEminus31");
    All2DHist_ChamberList.push_back("csc_wire_MEminus32");
    All2DHist_ChamberList.push_back("csc_wire_MEminus41");
    All2DHist_ChamberList.push_back("csc_wire_MEminus42");


    vector<TString> All1Dhists;

    All1Dhists.push_back("CSC_ME11_LCT_Strip");
    All1Dhists.push_back("CSC_ME11_LCT_Wire");
    All1Dhists.push_back("CSC_ME11_LCT_LocalPhi");
    All1Dhists.push_back("CSC_ME11_LCT_PackedPhi");
    All1Dhists.push_back("CSC_ME11_LCT_GblPhi");
    All1Dhists.push_back("CSC_ME11_LCT_PackedEta");
    All1Dhists.push_back("CSC_ME11_LCT_GblEta");
    All1Dhists.push_back("CSC_ME11_LCT_Quality");

    All1Dhists.push_back("CSC_ME11a_LCT_Strip");
    All1Dhists.push_back("CSC_ME11a_LCT_Wire");
    All1Dhists.push_back("CSC_ME11a_LCT_LocalPhi");
    All1Dhists.push_back("CSC_ME11a_LCT_PackedPhi");
    All1Dhists.push_back("CSC_ME11a_LCT_GblPhi");
    All1Dhists.push_back("CSC_ME11a_LCT_PackedEta");
    All1Dhists.push_back("CSC_ME11a_LCT_GblEta");
    All1Dhists.push_back("CSC_ME11a_LCT_Quality");

    All1Dhists.push_back("CSC_ME11b_LCT_Strip");
    All1Dhists.push_back("CSC_ME11b_LCT_Wire");
    All1Dhists.push_back("CSC_ME11b_LCT_LocalPhi");
    All1Dhists.push_back("CSC_ME11b_LCT_PackedPhi");
    All1Dhists.push_back("CSC_ME11b_LCT_GblPhi");
    All1Dhists.push_back("CSC_ME11b_LCT_PackedEta");
    All1Dhists.push_back("CSC_ME11b_LCT_GblEta");
    All1Dhists.push_back("CSC_ME11b_LCT_Quality");

    All1Dhists.push_back("CSC_ME_LCT_Strip");
    All1Dhists.push_back("CSC_ME_LCT_Wire");
    All1Dhists.push_back("CSC_ME_LCT_LocalPhi");
    All1Dhists.push_back("CSC_ME_LCT_PackedPhi");
    All1Dhists.push_back("CSC_ME_LCT_GblPhi");
    All1Dhists.push_back("CSC_ME_LCT_PackedEta");
    All1Dhists.push_back("CSC_ME_LCT_GblEta");
    All1Dhists.push_back("CSC_ME_LCT_Quality");

    All1Dhists.push_back("CSC_ME+42_LCT_GblPhi");
    All1Dhists.push_back("CSC_ME-42_LCT_GblPhi");



    //gStyle->SetOptStat(0);

    for(size_t ihist=0; ihist<Project2Dhists.size(); ihist++) {
		TH2F* hist_temp = (TH2F*) infile->Get("DQMData/"+runTag+"/L1T/Run summary/L1TCSCTF/"+Project2Dhists[ihist]);
                if(hist_temp==NULL) {
                    cout << "hist is NULL!" << endl;
		    delete hist_temp;
                    continue;
                }
		
		int YBins = hist_temp->GetYaxis()->GetNbins();

		for(int ybin=1; ybin<=YBins; ybin++){

			TString Hname = "";
			if(ybin==1) Hname = "ME1/1";
			else if (ybin==2) Hname = "ME1/2";
			else if (ybin==3) Hname = "ME1/3";
			else if (ybin==4) Hname = "ME2/1";
			else if (ybin==5) Hname = "ME2/2";
			else if (ybin==6) Hname = "ME3/1";
			else if (ybin==7) Hname = "ME3/2";
			else if (ybin==8) Hname = "ME4/1";
			else if (ybin==9) Hname = "ME4/2";

			TH1D *px = hist_temp->ProjectionX(Hname,ybin,ybin,"");
         	       	TCanvas *c = new TCanvas("c", "c", 700, 550);
               	 	TPad* t1 = new TPad("t1","t1", 0.0, 0.0, 1.0, 1.00);
                	t1->Draw();
                	t1->cd();
                	t1->SetRightMargin(0.05);
                	px->Draw("hist");

			TString Xtitle = px->GetXaxis()->GetTitle();
			px->GetXaxis()->SetTitle(Xtitle+", "+Hname);	

 	                px->GetYaxis()->SetTitle("Events");
        	        px->SetFillColor(kYellow);

			Hname.ReplaceAll("/","_");
			c->SaveAs(Project2Dhists[ihist]+"_"+Hname+".png");
                	c->SaveAs(Project2Dhists[ihist]+"_"+Hname+".pdf");

                	delete c;
			delete px;
		}
		delete hist_temp;




    }



    for(size_t ihist=0; ihist<All2Dhists.size(); ihist++) {

                TH2F* hist_temp = (TH2F*) infile->Get("DQMData/"+runTag+"/L1T/Run summary/L1TCSCTF/"+All2Dhists[ihist]);
                if(hist_temp==NULL) {
                    cout << "hist is NULL!" << endl;
                    continue;
                }

                TCanvas *c = new TCanvas("c", "c", 700, 550);
                TPad* t1 = new TPad("t1","t1", 0.0, 0.0, 1.0, 1.00);
                t1->Draw();
                t1->cd();
                t1->SetRightMargin(0.15);
                hist_temp->Draw("col Z TEXT");
		c->SaveAs(All2Dhists[ihist]+".png");
                c->SaveAs(All2Dhists[ihist]+".pdf");

                delete c;
		delete hist_temp;

    }

    //gStyle->SetOptStat(0);
    for(size_t ihist=0; ihist<All2DHist_ChamberList.size(); ihist++) {

                TH2F* hist_temp = (TH2F*) infile->Get("DQMData/"+runTag+"/L1T/Run summary/L1TCSCTF/"+All2DHist_ChamberList[ihist]);
                if(hist_temp==NULL) {
                    cout << "hist is NULL!" << endl;
                    continue;
                }

                TCanvas *c = new TCanvas("c", "c", 1200, 600);
                TPad* t1 = new TPad("t1","t1", 0.0, 0.0, 1.0, 1.00);
                t1->Draw();
                t1->cd();
                t1->SetRightMargin(0.15);
		if(All2DHist_ChamberList[ihist].Contains("strip") || All2DHist_ChamberList[ihist].Contains("wire")) hist_temp->Draw("col Z");
                else hist_temp->Draw("col Z TEXT");
		c->SaveAs(All2DHist_ChamberList[ihist]+".png");
                c->SaveAs(All2DHist_ChamberList[ihist]+".pdf");

                delete c;
		delete hist_temp;

    }



    gStyle->SetOptStat("nemruoi");

    for(size_t ihist=0; ihist<All1Dhists.size(); ihist++) {

                TH1F* hist_2 = (TH1F*) infile->Get("DQMData/"+runTag+"/L1T/Run summary/L1TCSCTF/"+All1Dhists[ihist]);
                if(hist_2==NULL) {
                    cout << "hist is NULL!" << endl;
                    continue;
                }

                TCanvas *c = new TCanvas("c", "c", 700, 550);
                TPad* t1 = new TPad("t1","t1", 0.0, 0.0, 1.0, 1.00);
                t1->Draw();
                t1->cd();
                t1->SetRightMargin(0.05);
                hist_2->Draw("hist");
                hist_2->GetYaxis()->SetTitle("Events");
		hist_2->SetFillColor(kYellow);

		c->SaveAs(All1Dhists[ihist]+".png");
                c->SaveAs(All1Dhists[ihist]+".pdf");

                delete c;
		delete hist_2;
    }


    infile->Close();

}
