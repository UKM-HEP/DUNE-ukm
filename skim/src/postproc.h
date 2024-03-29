//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Mar 28 14:05:07 2022 by ROOT version 6.22/06
// from TTree anatree/analysis tree
// found on file: MUSUN_dunefd_1454_gen_g4filt_detsim_freco_ana.root
//////////////////////////////////////////////////////////

#ifndef postproc_h
#define postproc_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TString.h>

// Header file for the classes stored in the TTree if any.
//#include "vector"
#include <TStopwatch.h>

#include <iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cmath>
#include <map>

#include <utility> // std::pair
#include <algorithm> // for std::find
//#include <iterator> // for std::begin, std::end

#include "tclap/CmdLine.h"

// SIZE
const Int_t MAXSIZE = 2000;

// list of interesting particle
// MC muons, pions, kaons and protons
//std::vector<Int_t> parts = { 13, 211, 321, 2212 };

class postproc {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain
   TString         fout;
// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           subrun;
   Int_t           event;
   Double_t        evttime;
   Double_t        beamtime;
   Double_t        pot;
   Char_t          isdata;
   Double_t        taulife;
   UInt_t          triggernumber;
   Double_t        triggertime;
   Double_t        beamgatetime;
   UInt_t          triggerbits;
   Double_t        potbnb;
   Double_t        potnumitgt;
   Double_t        potnumi101;
   Int_t           no_hits;
   Int_t           no_hits_stored;
   Short_t         hit_tpc[53543];   //[no_hits_stored]
   Short_t         hit_plane[53543];   //[no_hits_stored]
   Short_t         hit_wire[53543];   //[no_hits_stored]
   Short_t         hit_channel[53543];   //[no_hits_stored]
   Float_t         hit_peakT[53543];   //[no_hits_stored]
   Float_t         hit_charge[53543];   //[no_hits_stored]
   Float_t         hit_ph[53543];   //[no_hits_stored]
   Float_t         hit_startT[53543];   //[no_hits_stored]
   Float_t         hit_endT[53543];   //[no_hits_stored]
   Float_t         hit_rms[53543];   //[no_hits_stored]
   Float_t         hit_trueX[53543];   //[no_hits_stored]
   Float_t         hit_goodnessOfFit[53543];   //[no_hits_stored]
   Short_t         hit_multiplicity[53543];   //[no_hits_stored]
   Short_t         hit_trkid[53543];   //[no_hits_stored]
   Short_t         hit_trkKey[53543];   //[no_hits_stored]
   Short_t         hit_clusterid[53543];   //[no_hits_stored]
   Short_t         hit_clusterKey[53543];   //[no_hits_stored]
   Short_t         hit_spacepointid[53543];   //[no_hits_stored]
   Short_t         hit_spacepointKey[53543];   //[no_hits_stored]
   Float_t         hit_nelec[53543];   //[no_hits_stored]
   Float_t         hit_energy[53543];   //[no_hits_stored]
   Short_t         nnuvtx;
   Float_t         nuvtxx[675];   //[nnuvtx]
   Float_t         nuvtxy[675];   //[nnuvtx]
   Float_t         nuvtxz[675];   //[nnuvtx]
   Short_t         nuvtxpdg[675];   //[nnuvtx]
   Short_t         nclusters;
   Short_t         clusterId[2990];   //[nclusters]
   Short_t         clusterView[2990];   //[nclusters]
   Float_t         cluster_StartCharge[2990];   //[nclusters]
   Float_t         cluster_StartAngle[2990];   //[nclusters]
   Float_t         cluster_EndCharge[2990];   //[nclusters]
   Float_t         cluster_EndAngle[2990];   //[nclusters]
   Float_t         cluster_Integral[2990];   //[nclusters]
   Float_t         cluster_IntegralAverage[2990];   //[nclusters]
   Float_t         cluster_SummedADC[2990];   //[nclusters]
   Float_t         cluster_SummedADCaverage[2990];   //[nclusters]
   Float_t         cluster_MultipleHitDensity[2990];   //[nclusters]
   Float_t         cluster_Width[2990];   //[nclusters]
   Short_t         cluster_NHits[2990];   //[nclusters]
   Short_t         cluster_StartWire[2990];   //[nclusters]
   Short_t         cluster_StartTick[2990];   //[nclusters]
   Short_t         cluster_EndWire[2990];   //[nclusters]
   Short_t         cluster_EndTick[2990];   //[nclusters]
   Short_t         cluncosmictags_tagger[2990];   //[nclusters]
   Float_t         clucosmicscore_tagger[2990];   //[nclusters]
   Short_t         clucosmictype_tagger[2990];   //[nclusters]
   Char_t          kNTracker;
   Char_t          kNVertexAlgos;
   Char_t          kNShowerAlgos;
   Int_t           mcevts_truth;
   Int_t           nuPDG_truth[1];   //[mcevts_truth]
   Int_t           ccnc_truth[1];   //[mcevts_truth]
   Int_t           mode_truth[1];   //[mcevts_truth]
   Float_t         enu_truth[1];   //[mcevts_truth]
   Float_t         Q2_truth[1];   //[mcevts_truth]
   Float_t         W_truth[1];   //[mcevts_truth]
   Float_t         X_truth[1];   //[mcevts_truth]
   Float_t         Y_truth[1];   //[mcevts_truth]
   Int_t           hitnuc_truth[1];   //[mcevts_truth]
   Float_t         nuvtxx_truth[1];   //[mcevts_truth]
   Float_t         nuvtxy_truth[1];   //[mcevts_truth]
   Float_t         nuvtxz_truth[1];   //[mcevts_truth]
   Float_t         nu_dcosx_truth[1];   //[mcevts_truth]
   Float_t         nu_dcosy_truth[1];   //[mcevts_truth]
   Float_t         nu_dcosz_truth[1];   //[mcevts_truth]
   Float_t         lep_mom_truth[1];   //[mcevts_truth]
   Float_t         lep_dcosx_truth[1];   //[mcevts_truth]
   Float_t         lep_dcosy_truth[1];   //[mcevts_truth]
   Float_t         lep_dcosz_truth[1];   //[mcevts_truth]
   Float_t         vx_flux[1];   //[mcevts_truth]
   Float_t         vy_flux[1];   //[mcevts_truth]
   Float_t         vz_flux[1];   //[mcevts_truth]
   Float_t         pdpx_flux[1];   //[mcevts_truth]
   Float_t         pdpy_flux[1];   //[mcevts_truth]
   Float_t         pdpz_flux[1];   //[mcevts_truth]
   Float_t         ppdxdz_flux[1];   //[mcevts_truth]
   Float_t         ppdydz_flux[1];   //[mcevts_truth]
   Float_t         pppz_flux[1];   //[mcevts_truth]
   Int_t           ptype_flux[1];   //[mcevts_truth]
   Float_t         ppvx_flux[1];   //[mcevts_truth]
   Float_t         ppvy_flux[1];   //[mcevts_truth]
   Float_t         ppvz_flux[1];   //[mcevts_truth]
   Float_t         muparpx_flux[1];   //[mcevts_truth]
   Float_t         muparpy_flux[1];   //[mcevts_truth]
   Float_t         muparpz_flux[1];   //[mcevts_truth]
   Float_t         mupare_flux[1];   //[mcevts_truth]
   Int_t           tgen_flux[1];   //[mcevts_truth]
   Int_t           tgptype_flux[1];   //[mcevts_truth]
   Float_t         tgppx_flux[1];   //[mcevts_truth]
   Float_t         tgppy_flux[1];   //[mcevts_truth]
   Float_t         tgppz_flux[1];   //[mcevts_truth]
   Float_t         tprivx_flux[1];   //[mcevts_truth]
   Float_t         tprivy_flux[1];   //[mcevts_truth]
   Float_t         tprivz_flux[1];   //[mcevts_truth]
   Float_t         dk2gen_flux[1];   //[mcevts_truth]
   Float_t         gen2vtx_flux[1];   //[mcevts_truth]
   Float_t         tpx_flux[1];   //[mcevts_truth]
   Float_t         tpy_flux[1];   //[mcevts_truth]
   Float_t         tpz_flux[1];   //[mcevts_truth]
   Int_t           tptype_flux[1];   //[mcevts_truth]
   Int_t           genie_no_primaries;
   Int_t           genie_primaries_pdg[1];   //[genie_no_primaries]
   Float_t         genie_Eng[1];   //[genie_no_primaries]
   Float_t         genie_Px[1];   //[genie_no_primaries]
   Float_t         genie_Py[1];   //[genie_no_primaries]
   Float_t         genie_Pz[1];   //[genie_no_primaries]
   Float_t         genie_P[1];   //[genie_no_primaries]
   Int_t           genie_status_code[1];   //[genie_no_primaries]
   Float_t         genie_mass[1];   //[genie_no_primaries]
   Int_t           genie_trackID[1];   //[genie_no_primaries]
   Int_t           genie_ND[1];   //[genie_no_primaries]
   Int_t           genie_mother[1];   //[genie_no_primaries]
   Int_t           no_primaries;
   Int_t           geant_list_size;
   Int_t           geant_list_size_in_tpcAV;
   Int_t           pdg[16481];   //[geant_list_size]
   Int_t           status[16481];   //[geant_list_size]
   Float_t         Mass[16481];   //[geant_list_size]
   Float_t         Eng[16481];   //[geant_list_size]
   Float_t         EndE[16481];   //[geant_list_size]
   Float_t         Px[16481];   //[geant_list_size]
   Float_t         Py[16481];   //[geant_list_size]
   Float_t         Pz[16481];   //[geant_list_size]
   Float_t         P[16481];   //[geant_list_size]
   Float_t         StartPointx[16481];   //[geant_list_size]
   Float_t         StartPointy[16481];   //[geant_list_size]
   Float_t         StartPointz[16481];   //[geant_list_size]
   Float_t         StartT[16481];   //[geant_list_size]
   Float_t         EndPointx[16481];   //[geant_list_size]
   Float_t         EndPointy[16481];   //[geant_list_size]
   Float_t         EndPointz[16481];   //[geant_list_size]
   Float_t         EndT[16481];   //[geant_list_size]
   Float_t         theta[16481];   //[geant_list_size]
   Float_t         phi[16481];   //[geant_list_size]
   Float_t         theta_xz[16481];   //[geant_list_size]
   Float_t         theta_yz[16481];   //[geant_list_size]
   Float_t         pathlen[16481];   //[geant_list_size]
   Int_t           inTPCActive[16481];   //[geant_list_size]
   Float_t         StartPointx_tpcAV[16481];   //[geant_list_size]
   Float_t         StartPointy_tpcAV[16481];   //[geant_list_size]
   Float_t         StartPointz_tpcAV[16481];   //[geant_list_size]
   Float_t         StartT_tpcAV[16481];   //[geant_list_size]
   Float_t         StartE_tpcAV[16481];   //[geant_list_size]
   Float_t         StartP_tpcAV[16481];   //[geant_list_size]
   Float_t         StartPx_tpcAV[16481];   //[geant_list_size]
   Float_t         StartPy_tpcAV[16481];   //[geant_list_size]
   Float_t         StartPz_tpcAV[16481];   //[geant_list_size]
   Float_t         EndPointx_tpcAV[16481];   //[geant_list_size]
   Float_t         EndPointy_tpcAV[16481];   //[geant_list_size]
   Float_t         EndPointz_tpcAV[16481];   //[geant_list_size]
   Float_t         EndT_tpcAV[16481];   //[geant_list_size]
   Float_t         EndE_tpcAV[16481];   //[geant_list_size]
   Float_t         EndP_tpcAV[16481];   //[geant_list_size]
   Float_t         EndPx_tpcAV[16481];   //[geant_list_size]
   Float_t         EndPy_tpcAV[16481];   //[geant_list_size]
   Float_t         EndPz_tpcAV[16481];   //[geant_list_size]
   Float_t         pathlen_drifted[16481];   //[geant_list_size]
   Int_t           inTPCDrifted[16481];   //[geant_list_size]
   Float_t         StartPointx_drifted[16481];   //[geant_list_size]
   Float_t         StartPointy_drifted[16481];   //[geant_list_size]
   Float_t         StartPointz_drifted[16481];   //[geant_list_size]
   Float_t         StartT_drifted[16481];   //[geant_list_size]
   Float_t         StartE_drifted[16481];   //[geant_list_size]
   Float_t         StartP_drifted[16481];   //[geant_list_size]
   Float_t         StartPx_drifted[16481];   //[geant_list_size]
   Float_t         StartPy_drifted[16481];   //[geant_list_size]
   Float_t         StartPz_drifted[16481];   //[geant_list_size]
   Float_t         EndPointx_drifted[16481];   //[geant_list_size]
   Float_t         EndPointy_drifted[16481];   //[geant_list_size]
   Float_t         EndPointz_drifted[16481];   //[geant_list_size]
   Float_t         EndT_drifted[16481];   //[geant_list_size]
   Float_t         EndE_drifted[16481];   //[geant_list_size]
   Float_t         EndP_drifted[16481];   //[geant_list_size]
   Float_t         EndPx_drifted[16481];   //[geant_list_size]
   Float_t         EndPy_drifted[16481];   //[geant_list_size]
   Float_t         EndPz_drifted[16481];   //[geant_list_size]
   Int_t           NumberDaughters[16481];   //[geant_list_size]
   Int_t           Mother[16481];   //[geant_list_size]
   Int_t           TrackId[16481];   //[geant_list_size]
   Int_t           MergedId[16481];   //[geant_list_size]
   Int_t           origin[16481];   //[geant_list_size]
   Int_t           MCTruthIndex[16481];   //[geant_list_size]
   Int_t           process_primary[16481];   //[geant_list_size]
   std::vector<std::string>  *processname;
   Short_t         nshowers_emshower;
   Short_t         showerID_emshower[545];   //[nshowers_emshower]
   Short_t         shwr_bestplane_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_length_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_startdcosx_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_startdcosy_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_startdcosz_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_startx_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_starty_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_startz_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_totEng_emshower[545][3];   //[nshowers_emshower]
   Float_t         shwr_dedx_emshower[545][3];   //[nshowers_emshower]
   Float_t         shwr_mipEng_emshower[545][3];   //[nshowers_emshower]
   Short_t         shwr_hasPFParticle_emshower[545];   //[nshowers_emshower]
   Short_t         shwr_PFParticleID_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_pidmvamu_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_pidmvae_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_pidmvapich_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_pidmvaphoton_emshower[545];   //[nshowers_emshower]
   Float_t         shwr_pidmvapr_emshower[545];   //[nshowers_emshower]
   Short_t         ntracks_pmtrack;
   Short_t         trkId_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trkncosmictags_tagger_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkcosmicscore_tagger_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trkcosmictype_tagger_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trkncosmictags_containmenttagger_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkcosmicscore_containmenttagger_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trkcosmictype_containmenttagger_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trkncosmictags_flashmatch_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkcosmicscore_flashmatch_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trkcosmictype_flashmatch_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkke_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkrange_pmtrack[678][3];   //[ntracks_pmtrack]
   Int_t           trkidtruth_pmtrack[678][3];   //[ntracks_pmtrack]
   Short_t         trkorigin_pmtrack[678][3];   //[ntracks_pmtrack]
   Int_t           trkpdgtruth_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkefftruth_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkpurtruth_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkpitchc_pmtrack[678][3];   //[ntracks_pmtrack]
   Short_t         ntrkhits_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkdedx_pmtrack[678][3][2000];   //[ntracks_pmtrack]
   Float_t         trkdqdx_pmtrack[678][3][2000];   //[ntracks_pmtrack]
   Float_t         trkresrg_pmtrack[678][3][2000];   //[ntracks_pmtrack]
   Int_t           trktpc_pmtrack[678][3][2000];   //[ntracks_pmtrack]
   Float_t         trkxyz_pmtrack[678][3][2000][3];   //[ntracks_pmtrack]
   Float_t         trkstartx_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkstarty_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkstartz_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkstartd_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkendx_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkendy_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkendz_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkendd_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkflashT0_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trktrueT0_pmtrack[678];   //[ntracks_pmtrack]
   Int_t           trkg4id_pmtrack[678];   //[ntracks_pmtrack]
   Int_t           trkorig_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkpurity_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkcompleteness_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trktheta_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkphi_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkstartdcosx_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkstartdcosy_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkstartdcosz_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkenddcosx_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkenddcosy_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkenddcosz_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkthetaxz_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkthetayz_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkmom_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkmomrange_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkmommschi2_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkmommsllhd_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trklen_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trksvtxid_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trkevtxid_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkpidmvamu_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkpidmvae_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkpidmvapich_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkpidmvaphoton_pmtrack[678];   //[ntracks_pmtrack]
   Float_t         trkpidmvapr_pmtrack[678];   //[ntracks_pmtrack]
   Int_t           trkpidpdg_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkpidchi_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkpidchipr_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkpidchika_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkpidchipi_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkpidchimu_pmtrack[678][3];   //[ntracks_pmtrack]
   Float_t         trkpidpida_pmtrack[678][3];   //[ntracks_pmtrack]
   Short_t         trkpidbestplane_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trkhasPFParticle_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         trkPFParticleID_pmtrack[678];   //[ntracks_pmtrack]
   Short_t         ntracks_pmtracktc;
   Short_t         trkId_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trkncosmictags_tagger_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkcosmicscore_tagger_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trkcosmictype_tagger_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trkncosmictags_containmenttagger_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkcosmicscore_containmenttagger_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trkcosmictype_containmenttagger_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trkncosmictags_flashmatch_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkcosmicscore_flashmatch_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trkcosmictype_flashmatch_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkke_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkrange_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Int_t           trkidtruth_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Short_t         trkorigin_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Int_t           trkpdgtruth_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkefftruth_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkpurtruth_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkpitchc_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Short_t         ntrkhits_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkdedx_pmtracktc[696][3][2000];   //[ntracks_pmtracktc]
   Float_t         trkdqdx_pmtracktc[696][3][2000];   //[ntracks_pmtracktc]
   Float_t         trkresrg_pmtracktc[696][3][2000];   //[ntracks_pmtracktc]
   Int_t           trktpc_pmtracktc[696][3][2000];   //[ntracks_pmtracktc]
   Float_t         trkxyz_pmtracktc[696][3][2000][3];   //[ntracks_pmtracktc]
   Float_t         trkstartx_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkstarty_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkstartz_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkstartd_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkendx_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkendy_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkendz_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkendd_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkflashT0_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trktrueT0_pmtracktc[696];   //[ntracks_pmtracktc]
   Int_t           trkg4id_pmtracktc[696];   //[ntracks_pmtracktc]
   Int_t           trkorig_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkpurity_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkcompleteness_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trktheta_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkphi_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkstartdcosx_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkstartdcosy_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkstartdcosz_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkenddcosx_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkenddcosy_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkenddcosz_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkthetaxz_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkthetayz_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkmom_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkmomrange_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkmommschi2_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkmommsllhd_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trklen_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trksvtxid_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trkevtxid_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkpidmvamu_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkpidmvae_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkpidmvapich_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkpidmvaphoton_pmtracktc[696];   //[ntracks_pmtracktc]
   Float_t         trkpidmvapr_pmtracktc[696];   //[ntracks_pmtracktc]
   Int_t           trkpidpdg_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkpidchi_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkpidchipr_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkpidchika_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkpidchipi_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkpidchimu_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Float_t         trkpidpida_pmtracktc[696][3];   //[ntracks_pmtracktc]
   Short_t         trkpidbestplane_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trkhasPFParticle_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         trkPFParticleID_pmtracktc[696];   //[ntracks_pmtracktc]
   Short_t         ntracks_pandoraTrack;
   Short_t         trkId_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trkncosmictags_tagger_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkcosmicscore_tagger_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trkcosmictype_tagger_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trkncosmictags_containmenttagger_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkcosmicscore_containmenttagger_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trkcosmictype_containmenttagger_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trkncosmictags_flashmatch_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkcosmicscore_flashmatch_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trkcosmictype_flashmatch_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkke_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkrange_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Int_t           trkidtruth_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Short_t         trkorigin_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Int_t           trkpdgtruth_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkefftruth_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkpurtruth_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkpitchc_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Short_t         ntrkhits_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkdedx_pandoraTrack[583][3][2000];   //[ntracks_pandoraTrack]
   Float_t         trkdqdx_pandoraTrack[583][3][2000];   //[ntracks_pandoraTrack]
   Float_t         trkresrg_pandoraTrack[583][3][2000];   //[ntracks_pandoraTrack]
   Int_t           trktpc_pandoraTrack[583][3][2000];   //[ntracks_pandoraTrack]
   Float_t         trkxyz_pandoraTrack[583][3][2000][3];   //[ntracks_pandoraTrack]
   Float_t         trkstartx_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkstarty_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkstartz_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkstartd_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkendx_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkendy_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkendz_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkendd_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkflashT0_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trktrueT0_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Int_t           trkg4id_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Int_t           trkorig_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkpurity_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkcompleteness_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trktheta_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkphi_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkstartdcosx_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkstartdcosy_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkstartdcosz_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkenddcosx_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkenddcosy_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkenddcosz_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkthetaxz_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkthetayz_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkmom_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkmomrange_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkmommschi2_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkmommsllhd_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trklen_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trksvtxid_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trkevtxid_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkpidmvamu_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkpidmvae_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkpidmvapich_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkpidmvaphoton_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Float_t         trkpidmvapr_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Int_t           trkpidpdg_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkpidchi_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkpidchipr_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkpidchika_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkpidchipi_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkpidchimu_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Float_t         trkpidpida_pandoraTrack[583][3];   //[ntracks_pandoraTrack]
   Short_t         trkpidbestplane_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trkhasPFParticle_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         trkPFParticleID_pandoraTrack[583];   //[ntracks_pandoraTrack]
   Short_t         ntracks_pmtrajfit;
   Short_t         trkId_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trkncosmictags_tagger_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkcosmicscore_tagger_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trkcosmictype_tagger_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trkncosmictags_containmenttagger_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkcosmicscore_containmenttagger_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trkcosmictype_containmenttagger_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trkncosmictags_flashmatch_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkcosmicscore_flashmatch_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trkcosmictype_flashmatch_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkke_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkrange_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Int_t           trkidtruth_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Short_t         trkorigin_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Int_t           trkpdgtruth_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkefftruth_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkpurtruth_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkpitchc_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Short_t         ntrkhits_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkdedx_pmtrajfit[788][3][2000];   //[ntracks_pmtrajfit]
   Float_t         trkdqdx_pmtrajfit[788][3][2000];   //[ntracks_pmtrajfit]
   Float_t         trkresrg_pmtrajfit[788][3][2000];   //[ntracks_pmtrajfit]
   Int_t           trktpc_pmtrajfit[788][3][2000];   //[ntracks_pmtrajfit]
   Float_t         trkxyz_pmtrajfit[788][3][2000][3];   //[ntracks_pmtrajfit]
   Float_t         trkstartx_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkstarty_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkstartz_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkstartd_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkendx_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkendy_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkendz_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkendd_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkflashT0_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trktrueT0_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Int_t           trkg4id_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Int_t           trkorig_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkpurity_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkcompleteness_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trktheta_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkphi_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkstartdcosx_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkstartdcosy_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkstartdcosz_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkenddcosx_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkenddcosy_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkenddcosz_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkthetaxz_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkthetayz_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkmom_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkmomrange_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkmommschi2_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkmommsllhd_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trklen_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trksvtxid_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trkevtxid_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkpidmvamu_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkpidmvae_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkpidmvapich_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkpidmvaphoton_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Float_t         trkpidmvapr_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Int_t           trkpidpdg_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkpidchi_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkpidchipr_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkpidchika_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkpidchipi_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkpidchimu_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Float_t         trkpidpida_pmtrajfit[788][3];   //[ntracks_pmtrajfit]
   Short_t         trkpidbestplane_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trkhasPFParticle_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         trkPFParticleID_pmtrajfit[788];   //[ntracks_pmtrajfit]
   Short_t         nvtx_linecluster;
   Short_t         vtxId_linecluster[7];   //[nvtx_linecluster]
   Float_t         vtxx_linecluster[7];   //[nvtx_linecluster]
   Float_t         vtxy_linecluster[7];   //[nvtx_linecluster]
   Float_t         vtxz_linecluster[7];   //[nvtx_linecluster]
   Short_t         vtxhasPFParticle_linecluster[7];   //[nvtx_linecluster]
   Short_t         vtxPFParticleID_linecluster[7];   //[nvtx_linecluster]
   Short_t         nvtx_pmtrack;
   Short_t         vtxId_pmtrack[646];   //[nvtx_pmtrack]
   Float_t         vtxx_pmtrack[646];   //[nvtx_pmtrack]
   Float_t         vtxy_pmtrack[646];   //[nvtx_pmtrack]
   Float_t         vtxz_pmtrack[646];   //[nvtx_pmtrack]
   Short_t         vtxhasPFParticle_pmtrack[646];   //[nvtx_pmtrack]
   Short_t         vtxPFParticleID_pmtrack[646];   //[nvtx_pmtrack]
   Short_t         nvtx_pandora;
   Short_t         vtxId_pandora[731];   //[nvtx_pandora]
   Float_t         vtxx_pandora[731];   //[nvtx_pandora]
   Float_t         vtxy_pandora[731];   //[nvtx_pandora]
   Float_t         vtxz_pandora[731];   //[nvtx_pandora]
   Short_t         vtxhasPFParticle_pandora[731];   //[nvtx_pandora]
   Short_t         vtxPFParticleID_pandora[731];   //[nvtx_pandora]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_subrun;   //!
   TBranch        *b_event;   //!
   TBranch        *b_evttime;   //!
   TBranch        *b_beamtime;   //!
   TBranch        *b_pot;   //!
   TBranch        *b_isdata;   //!
   TBranch        *b_taulife;   //!
   TBranch        *b_triggernumber;   //!
   TBranch        *b_triggertime;   //!
   TBranch        *b_beamgatetime;   //!
   TBranch        *b_triggerbits;   //!
   TBranch        *b_potbnb;   //!
   TBranch        *b_potnumitgt;   //!
   TBranch        *b_potnumi101;   //!
   TBranch        *b_no_hits;   //!
   TBranch        *b_no_hits_stored;   //!
   TBranch        *b_hit_tpc;   //!
   TBranch        *b_hit_plane;   //!
   TBranch        *b_hit_wire;   //!
   TBranch        *b_hit_channel;   //!
   TBranch        *b_hit_peakT;   //!
   TBranch        *b_hit_charge;   //!
   TBranch        *b_hit_ph;   //!
   TBranch        *b_hit_startT;   //!
   TBranch        *b_hit_endT;   //!
   TBranch        *b_hit_rms;   //!
   TBranch        *b_hit_trueX;   //!
   TBranch        *b_hit_goodnessOfFit;   //!
   TBranch        *b_hit_multiplicity;   //!
   TBranch        *b_hit_trkid;   //!
   TBranch        *b_hit_trkKey;   //!
   TBranch        *b_hit_clusterid;   //!
   TBranch        *b_hit_clusterKey;   //!
   TBranch        *b_hit_spacepointid;   //!
   TBranch        *b_hit_spacepointKey;   //!
   TBranch        *b_hit_nelec;   //!
   TBranch        *b_hit_energy;   //!
   TBranch        *b_nnuvtx;   //!
   TBranch        *b_nuvtxx;   //!
   TBranch        *b_nuvtxy;   //!
   TBranch        *b_nuvtxz;   //!
   TBranch        *b_nuvtxpdg;   //!
   TBranch        *b_nclusters;   //!
   TBranch        *b_clusterId;   //!
   TBranch        *b_clusterView;   //!
   TBranch        *b_cluster_StartCharge;   //!
   TBranch        *b_cluster_StartAngle;   //!
   TBranch        *b_cluster_EndCharge;   //!
   TBranch        *b_cluster_EndAngle;   //!
   TBranch        *b_cluster_Integral;   //!
   TBranch        *b_cluster_IntegralAverage;   //!
   TBranch        *b_cluster_SummedADC;   //!
   TBranch        *b_cluster_SummedADCaverage;   //!
   TBranch        *b_cluster_MultipleHitDensity;   //!
   TBranch        *b_cluster_Width;   //!
   TBranch        *b_cluster_NHits;   //!
   TBranch        *b_cluster_StartWire;   //!
   TBranch        *b_cluster_StartTick;   //!
   TBranch        *b_cluster_EndWire;   //!
   TBranch        *b_cluster_EndTick;   //!
   TBranch        *b_cluncosmictags_tagger;   //!
   TBranch        *b_clucosmicscore_tagger;   //!
   TBranch        *b_clucosmictype_tagger;   //!
   TBranch        *b_kNTracker;   //!
   TBranch        *b_kNVertexAlgos;   //!
   TBranch        *b_kNShowerAlgos;   //!
   TBranch        *b_mcevts_truth;   //!
   TBranch        *b_nuPDG_truth;   //!
   TBranch        *b_ccnc_truth;   //!
   TBranch        *b_mode_truth;   //!
   TBranch        *b_enu_truth;   //!
   TBranch        *b_Q2_truth;   //!
   TBranch        *b_W_truth;   //!
   TBranch        *b_X_truth;   //!
   TBranch        *b_Y_truth;   //!
   TBranch        *b_hitnuc_truth;   //!
   TBranch        *b_nuvtxx_truth;   //!
   TBranch        *b_nuvtxy_truth;   //!
   TBranch        *b_nuvtxz_truth;   //!
   TBranch        *b_nu_dcosx_truth;   //!
   TBranch        *b_nu_dcosy_truth;   //!
   TBranch        *b_nu_dcosz_truth;   //!
   TBranch        *b_lep_mom_truth;   //!
   TBranch        *b_lep_dcosx_truth;   //!
   TBranch        *b_lep_dcosy_truth;   //!
   TBranch        *b_lep_dcosz_truth;   //!
   TBranch        *b_vx_flux;   //!
   TBranch        *b_vy_flux;   //!
   TBranch        *b_vz_flux;   //!
   TBranch        *b_pdpx_flux;   //!
   TBranch        *b_pdpy_flux;   //!
   TBranch        *b_pdpz_flux;   //!
   TBranch        *b_ppdxdz_flux;   //!
   TBranch        *b_ppdydz_flux;   //!
   TBranch        *b_pppz_flux;   //!
   TBranch        *b_ptype_flux;   //!
   TBranch        *b_ppvx_flux;   //!
   TBranch        *b_ppvy_flux;   //!
   TBranch        *b_ppvz_flux;   //!
   TBranch        *b_muparpx_flux;   //!
   TBranch        *b_muparpy_flux;   //!
   TBranch        *b_muparpz_flux;   //!
   TBranch        *b_mupare_flux;   //!
   TBranch        *b_tgen_flux;   //!
   TBranch        *b_tgptype_flux;   //!
   TBranch        *b_tgppx_flux;   //!
   TBranch        *b_tgppy_flux;   //!
   TBranch        *b_tgppz_flux;   //!
   TBranch        *b_tprivx_flux;   //!
   TBranch        *b_tprivy_flux;   //!
   TBranch        *b_tprivz_flux;   //!
   TBranch        *b_dk2gen_flux;   //!
   TBranch        *b_gen2vtx_flux;   //!
   TBranch        *b_tpx_flux;   //!
   TBranch        *b_tpy_flux;   //!
   TBranch        *b_tpz_flux;   //!
   TBranch        *b_tptype_flux;   //!
   TBranch        *b_genie_no_primaries;   //!
   TBranch        *b_genie_primaries_pdg;   //!
   TBranch        *b_genie_Eng;   //!
   TBranch        *b_genie_Px;   //!
   TBranch        *b_genie_Py;   //!
   TBranch        *b_genie_Pz;   //!
   TBranch        *b_genie_P;   //!
   TBranch        *b_genie_status_code;   //!
   TBranch        *b_genie_mass;   //!
   TBranch        *b_genie_trackID;   //!
   TBranch        *b_genie_ND;   //!
   TBranch        *b_genie_mother;   //!
   TBranch        *b_no_primaries;   //!
   TBranch        *b_geant_list_size;   //!
   TBranch        *b_geant_list_size_in_tpcAV;   //!
   TBranch        *b_pdg;   //!
   TBranch        *b_status;   //!
   TBranch        *b_Mass;   //!
   TBranch        *b_Eng;   //!
   TBranch        *b_EndE;   //!
   TBranch        *b_Px;   //!
   TBranch        *b_Py;   //!
   TBranch        *b_Pz;   //!
   TBranch        *b_P;   //!
   TBranch        *b_StartPointx;   //!
   TBranch        *b_StartPointy;   //!
   TBranch        *b_StartPointz;   //!
   TBranch        *b_StartT;   //!
   TBranch        *b_EndPointx;   //!
   TBranch        *b_EndPointy;   //!
   TBranch        *b_EndPointz;   //!
   TBranch        *b_EndT;   //!
   TBranch        *b_theta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_theta_xz;   //!
   TBranch        *b_theta_yz;   //!
   TBranch        *b_pathlen;   //!
   TBranch        *b_inTPCActive;   //!
   TBranch        *b_StartPointx_tpcAV;   //!
   TBranch        *b_StartPointy_tpcAV;   //!
   TBranch        *b_StartPointz_tpcAV;   //!
   TBranch        *b_StartT_tpcAV;   //!
   TBranch        *b_StartE_tpcAV;   //!
   TBranch        *b_StartP_tpcAV;   //!
   TBranch        *b_StartPx_tpcAV;   //!
   TBranch        *b_StartPy_tpcAV;   //!
   TBranch        *b_StartPz_tpcAV;   //!
   TBranch        *b_EndPointx_tpcAV;   //!
   TBranch        *b_EndPointy_tpcAV;   //!
   TBranch        *b_EndPointz_tpcAV;   //!
   TBranch        *b_EndT_tpcAV;   //!
   TBranch        *b_EndE_tpcAV;   //!
   TBranch        *b_EndP_tpcAV;   //!
   TBranch        *b_EndPx_tpcAV;   //!
   TBranch        *b_EndPy_tpcAV;   //!
   TBranch        *b_EndPz_tpcAV;   //!
   TBranch        *b_pathlen_drifted;   //!
   TBranch        *b_inTPCDrifted;   //!
   TBranch        *b_StartPointx_drifted;   //!
   TBranch        *b_StartPointy_drifted;   //!
   TBranch        *b_StartPointz_drifted;   //!
   TBranch        *b_StartT_drifted;   //!
   TBranch        *b_StartE_drifted;   //!
   TBranch        *b_StartP_drifted;   //!
   TBranch        *b_StartPx_drifted;   //!
   TBranch        *b_StartPy_drifted;   //!
   TBranch        *b_StartPz_drifted;   //!
   TBranch        *b_EndPointx_drifted;   //!
   TBranch        *b_EndPointy_drifted;   //!
   TBranch        *b_EndPointz_drifted;   //!
   TBranch        *b_EndT_drifted;   //!
   TBranch        *b_EndE_drifted;   //!
   TBranch        *b_EndP_drifted;   //!
   TBranch        *b_EndPx_drifted;   //!
   TBranch        *b_EndPy_drifted;   //!
   TBranch        *b_EndPz_drifted;   //!
   TBranch        *b_NumberDaughters;   //!
   TBranch        *b_Mother;   //!
   TBranch        *b_TrackId;   //!
   TBranch        *b_MergedId;   //!
   TBranch        *b_origin;   //!
   TBranch        *b_MCTruthIndex;   //!
   TBranch        *b_process_primary;   //!
   TBranch        *b_processname;   //!
   TBranch        *b_nshowers_emshower;   //!
   TBranch        *b_showerID_emshower;   //!
   TBranch        *b_shwr_bestplane_emshower;   //!
   TBranch        *b_shwr_length_emshower;   //!
   TBranch        *b_shwr_startdcosx_emshower;   //!
   TBranch        *b_shwr_startdcosy_emshower;   //!
   TBranch        *b_shwr_startdcosz_emshower;   //!
   TBranch        *b_shwr_startx_emshower;   //!
   TBranch        *b_shwr_starty_emshower;   //!
   TBranch        *b_shwr_startz_emshower;   //!
   TBranch        *b_shwr_totEng_emshower;   //!
   TBranch        *b_shwr_dedx_emshower;   //!
   TBranch        *b_shwr_mipEng_emshower;   //!
   TBranch        *b_shwr_hasPFParticle_emshower;   //!
   TBranch        *b_shwr_PFParticleID_emshower;   //!
   TBranch        *b_shwr_pidmvamu_emshower;   //!
   TBranch        *b_shwr_pidmvae_emshower;   //!
   TBranch        *b_shwr_pidmvapich_emshower;   //!
   TBranch        *b_shwr_pidmvaphoton_emshower;   //!
   TBranch        *b_shwr_pidmvapr_emshower;   //!
   TBranch        *b_ntracks_pmtrack;   //!
   TBranch        *b_trkId_pmtrack;   //!
   TBranch        *b_trkncosmictags_tagger_pmtrack;   //!
   TBranch        *b_trkcosmicscore_tagger_pmtrack;   //!
   TBranch        *b_trkcosmictype_tagger_pmtrack;   //!
   TBranch        *b_trkncosmictags_containmenttagger_pmtrack;   //!
   TBranch        *b_trkcosmicscore_containmenttagger_pmtrack;   //!
   TBranch        *b_trkcosmictype_containmenttagger_pmtrack;   //!
   TBranch        *b_trkncosmictags_flashmatch_pmtrack;   //!
   TBranch        *b_trkcosmicscore_flashmatch_pmtrack;   //!
   TBranch        *b_trkcosmictype_flashmatch_pmtrack;   //!
   TBranch        *b_trkke_pmtrack;   //!
   TBranch        *b_trkrange_pmtrack;   //!
   TBranch        *b_trkidtruth_pmtrack;   //!
   TBranch        *b_trkorigin_pmtrack;   //!
   TBranch        *b_trkpdgtruth_pmtrack;   //!
   TBranch        *b_trkefftruth_pmtrack;   //!
   TBranch        *b_trkpurtruth_pmtrack;   //!
   TBranch        *b_trkpitchc_pmtrack;   //!
   TBranch        *b_ntrkhits_pmtrack;   //!
   TBranch        *b_trkdedx_pmtrack;   //!
   TBranch        *b_trkdqdx_pmtrack;   //!
   TBranch        *b_trkresrg_pmtrack;   //!
   TBranch        *b_trktpc_pmtrack;   //!
   TBranch        *b_trkxyz_pmtrack;   //!
   TBranch        *b_trkstartx_pmtrack;   //!
   TBranch        *b_trkstarty_pmtrack;   //!
   TBranch        *b_trkstartz_pmtrack;   //!
   TBranch        *b_trkstartd_pmtrack;   //!
   TBranch        *b_trkendx_pmtrack;   //!
   TBranch        *b_trkendy_pmtrack;   //!
   TBranch        *b_trkendz_pmtrack;   //!
   TBranch        *b_trkendd_pmtrack;   //!
   TBranch        *b_trkflashT0_pmtrack;   //!
   TBranch        *b_trktrueT0_pmtrack;   //!
   TBranch        *b_trkg4id_pmtrack;   //!
   TBranch        *b_trkorig_pmtrack;   //!
   TBranch        *b_trkpurity_pmtrack;   //!
   TBranch        *b_trkcompleteness_pmtrack;   //!
   TBranch        *b_trktheta_pmtrack;   //!
   TBranch        *b_trkphi_pmtrack;   //!
   TBranch        *b_trkstartdcosx_pmtrack;   //!
   TBranch        *b_trkstartdcosy_pmtrack;   //!
   TBranch        *b_trkstartdcosz_pmtrack;   //!
   TBranch        *b_trkenddcosx_pmtrack;   //!
   TBranch        *b_trkenddcosy_pmtrack;   //!
   TBranch        *b_trkenddcosz_pmtrack;   //!
   TBranch        *b_trkthetaxz_pmtrack;   //!
   TBranch        *b_trkthetayz_pmtrack;   //!
   TBranch        *b_trkmom_pmtrack;   //!
   TBranch        *b_trkmomrange_pmtrack;   //!
   TBranch        *b_trkmommschi2_pmtrack;   //!
   TBranch        *b_trkmommsllhd_pmtrack;   //!
   TBranch        *b_trklen_pmtrack;   //!
   TBranch        *b_trksvtxid_pmtrack;   //!
   TBranch        *b_trkevtxid_pmtrack;   //!
   TBranch        *b_trkpidmvamu_pmtrack;   //!
   TBranch        *b_trkpidmvae_pmtrack;   //!
   TBranch        *b_trkpidmvapich_pmtrack;   //!
   TBranch        *b_trkpidmvaphoton_pmtrack;   //!
   TBranch        *b_trkpidmvapr_pmtrack;   //!
   TBranch        *b_trkpidpdg_pmtrack;   //!
   TBranch        *b_trkpidchi_pmtrack;   //!
   TBranch        *b_trkpidchipr_pmtrack;   //!
   TBranch        *b_trkpidchika_pmtrack;   //!
   TBranch        *b_trkpidchipi_pmtrack;   //!
   TBranch        *b_trkpidchimu_pmtrack;   //!
   TBranch        *b_trkpidpida_pmtrack;   //!
   TBranch        *b_trkpidbestplane_pmtrack;   //!
   TBranch        *b_trkhasPFParticle_pmtrack;   //!
   TBranch        *b_trkPFParticleID_pmtrack;   //!
   TBranch        *b_ntracks_pmtracktc;   //!
   TBranch        *b_trkId_pmtracktc;   //!
   TBranch        *b_trkncosmictags_tagger_pmtracktc;   //!
   TBranch        *b_trkcosmicscore_tagger_pmtracktc;   //!
   TBranch        *b_trkcosmictype_tagger_pmtracktc;   //!
   TBranch        *b_trkncosmictags_containmenttagger_pmtracktc;   //!
   TBranch        *b_trkcosmicscore_containmenttagger_pmtracktc;   //!
   TBranch        *b_trkcosmictype_containmenttagger_pmtracktc;   //!
   TBranch        *b_trkncosmictags_flashmatch_pmtracktc;   //!
   TBranch        *b_trkcosmicscore_flashmatch_pmtracktc;   //!
   TBranch        *b_trkcosmictype_flashmatch_pmtracktc;   //!
   TBranch        *b_trkke_pmtracktc;   //!
   TBranch        *b_trkrange_pmtracktc;   //!
   TBranch        *b_trkidtruth_pmtracktc;   //!
   TBranch        *b_trkorigin_pmtracktc;   //!
   TBranch        *b_trkpdgtruth_pmtracktc;   //!
   TBranch        *b_trkefftruth_pmtracktc;   //!
   TBranch        *b_trkpurtruth_pmtracktc;   //!
   TBranch        *b_trkpitchc_pmtracktc;   //!
   TBranch        *b_ntrkhits_pmtracktc;   //!
   TBranch        *b_trkdedx_pmtracktc;   //!
   TBranch        *b_trkdqdx_pmtracktc;   //!
   TBranch        *b_trkresrg_pmtracktc;   //!
   TBranch        *b_trktpc_pmtracktc;   //!
   TBranch        *b_trkxyz_pmtracktc;   //!
   TBranch        *b_trkstartx_pmtracktc;   //!
   TBranch        *b_trkstarty_pmtracktc;   //!
   TBranch        *b_trkstartz_pmtracktc;   //!
   TBranch        *b_trkstartd_pmtracktc;   //!
   TBranch        *b_trkendx_pmtracktc;   //!
   TBranch        *b_trkendy_pmtracktc;   //!
   TBranch        *b_trkendz_pmtracktc;   //!
   TBranch        *b_trkendd_pmtracktc;   //!
   TBranch        *b_trkflashT0_pmtracktc;   //!
   TBranch        *b_trktrueT0_pmtracktc;   //!
   TBranch        *b_trkg4id_pmtracktc;   //!
   TBranch        *b_trkorig_pmtracktc;   //!
   TBranch        *b_trkpurity_pmtracktc;   //!
   TBranch        *b_trkcompleteness_pmtracktc;   //!
   TBranch        *b_trktheta_pmtracktc;   //!
   TBranch        *b_trkphi_pmtracktc;   //!
   TBranch        *b_trkstartdcosx_pmtracktc;   //!
   TBranch        *b_trkstartdcosy_pmtracktc;   //!
   TBranch        *b_trkstartdcosz_pmtracktc;   //!
   TBranch        *b_trkenddcosx_pmtracktc;   //!
   TBranch        *b_trkenddcosy_pmtracktc;   //!
   TBranch        *b_trkenddcosz_pmtracktc;   //!
   TBranch        *b_trkthetaxz_pmtracktc;   //!
   TBranch        *b_trkthetayz_pmtracktc;   //!
   TBranch        *b_trkmom_pmtracktc;   //!
   TBranch        *b_trkmomrange_pmtracktc;   //!
   TBranch        *b_trkmommschi2_pmtracktc;   //!
   TBranch        *b_trkmommsllhd_pmtracktc;   //!
   TBranch        *b_trklen_pmtracktc;   //!
   TBranch        *b_trksvtxid_pmtracktc;   //!
   TBranch        *b_trkevtxid_pmtracktc;   //!
   TBranch        *b_trkpidmvamu_pmtracktc;   //!
   TBranch        *b_trkpidmvae_pmtracktc;   //!
   TBranch        *b_trkpidmvapich_pmtracktc;   //!
   TBranch        *b_trkpidmvaphoton_pmtracktc;   //!
   TBranch        *b_trkpidmvapr_pmtracktc;   //!
   TBranch        *b_trkpidpdg_pmtracktc;   //!
   TBranch        *b_trkpidchi_pmtracktc;   //!
   TBranch        *b_trkpidchipr_pmtracktc;   //!
   TBranch        *b_trkpidchika_pmtracktc;   //!
   TBranch        *b_trkpidchipi_pmtracktc;   //!
   TBranch        *b_trkpidchimu_pmtracktc;   //!
   TBranch        *b_trkpidpida_pmtracktc;   //!
   TBranch        *b_trkpidbestplane_pmtracktc;   //!
   TBranch        *b_trkhasPFParticle_pmtracktc;   //!
   TBranch        *b_trkPFParticleID_pmtracktc;   //!
   TBranch        *b_ntracks_pandoraTrack;   //!
   TBranch        *b_trkId_pandoraTrack;   //!
   TBranch        *b_trkncosmictags_tagger_pandoraTrack;   //!
   TBranch        *b_trkcosmicscore_tagger_pandoraTrack;   //!
   TBranch        *b_trkcosmictype_tagger_pandoraTrack;   //!
   TBranch        *b_trkncosmictags_containmenttagger_pandoraTrack;   //!
   TBranch        *b_trkcosmicscore_containmenttagger_pandoraTrack;   //!
   TBranch        *b_trkcosmictype_containmenttagger_pandoraTrack;   //!
   TBranch        *b_trkncosmictags_flashmatch_pandoraTrack;   //!
   TBranch        *b_trkcosmicscore_flashmatch_pandoraTrack;   //!
   TBranch        *b_trkcosmictype_flashmatch_pandoraTrack;   //!
   TBranch        *b_trkke_pandoraTrack;   //!
   TBranch        *b_trkrange_pandoraTrack;   //!
   TBranch        *b_trkidtruth_pandoraTrack;   //!
   TBranch        *b_trkorigin_pandoraTrack;   //!
   TBranch        *b_trkpdgtruth_pandoraTrack;   //!
   TBranch        *b_trkefftruth_pandoraTrack;   //!
   TBranch        *b_trkpurtruth_pandoraTrack;   //!
   TBranch        *b_trkpitchc_pandoraTrack;   //!
   TBranch        *b_ntrkhits_pandoraTrack;   //!
   TBranch        *b_trkdedx_pandoraTrack;   //!
   TBranch        *b_trkdqdx_pandoraTrack;   //!
   TBranch        *b_trkresrg_pandoraTrack;   //!
   TBranch        *b_trktpc_pandoraTrack;   //!
   TBranch        *b_trkxyz_pandoraTrack;   //!
   TBranch        *b_trkstartx_pandoraTrack;   //!
   TBranch        *b_trkstarty_pandoraTrack;   //!
   TBranch        *b_trkstartz_pandoraTrack;   //!
   TBranch        *b_trkstartd_pandoraTrack;   //!
   TBranch        *b_trkendx_pandoraTrack;   //!
   TBranch        *b_trkendy_pandoraTrack;   //!
   TBranch        *b_trkendz_pandoraTrack;   //!
   TBranch        *b_trkendd_pandoraTrack;   //!
   TBranch        *b_trkflashT0_pandoraTrack;   //!
   TBranch        *b_trktrueT0_pandoraTrack;   //!
   TBranch        *b_trkg4id_pandoraTrack;   //!
   TBranch        *b_trkorig_pandoraTrack;   //!
   TBranch        *b_trkpurity_pandoraTrack;   //!
   TBranch        *b_trkcompleteness_pandoraTrack;   //!
   TBranch        *b_trktheta_pandoraTrack;   //!
   TBranch        *b_trkphi_pandoraTrack;   //!
   TBranch        *b_trkstartdcosx_pandoraTrack;   //!
   TBranch        *b_trkstartdcosy_pandoraTrack;   //!
   TBranch        *b_trkstartdcosz_pandoraTrack;   //!
   TBranch        *b_trkenddcosx_pandoraTrack;   //!
   TBranch        *b_trkenddcosy_pandoraTrack;   //!
   TBranch        *b_trkenddcosz_pandoraTrack;   //!
   TBranch        *b_trkthetaxz_pandoraTrack;   //!
   TBranch        *b_trkthetayz_pandoraTrack;   //!
   TBranch        *b_trkmom_pandoraTrack;   //!
   TBranch        *b_trkmomrange_pandoraTrack;   //!
   TBranch        *b_trkmommschi2_pandoraTrack;   //!
   TBranch        *b_trkmommsllhd_pandoraTrack;   //!
   TBranch        *b_trklen_pandoraTrack;   //!
   TBranch        *b_trksvtxid_pandoraTrack;   //!
   TBranch        *b_trkevtxid_pandoraTrack;   //!
   TBranch        *b_trkpidmvamu_pandoraTrack;   //!
   TBranch        *b_trkpidmvae_pandoraTrack;   //!
   TBranch        *b_trkpidmvapich_pandoraTrack;   //!
   TBranch        *b_trkpidmvaphoton_pandoraTrack;   //!
   TBranch        *b_trkpidmvapr_pandoraTrack;   //!
   TBranch        *b_trkpidpdg_pandoraTrack;   //!
   TBranch        *b_trkpidchi_pandoraTrack;   //!
   TBranch        *b_trkpidchipr_pandoraTrack;   //!
   TBranch        *b_trkpidchika_pandoraTrack;   //!
   TBranch        *b_trkpidchipi_pandoraTrack;   //!
   TBranch        *b_trkpidchimu_pandoraTrack;   //!
   TBranch        *b_trkpidpida_pandoraTrack;   //!
   TBranch        *b_trkpidbestplane_pandoraTrack;   //!
   TBranch        *b_trkhasPFParticle_pandoraTrack;   //!
   TBranch        *b_trkPFParticleID_pandoraTrack;   //!
   TBranch        *b_ntracks_pmtrajfit;   //!
   TBranch        *b_trkId_pmtrajfit;   //!
   TBranch        *b_trkncosmictags_tagger_pmtrajfit;   //!
   TBranch        *b_trkcosmicscore_tagger_pmtrajfit;   //!
   TBranch        *b_trkcosmictype_tagger_pmtrajfit;   //!
   TBranch        *b_trkncosmictags_containmenttagger_pmtrajfit;   //!
   TBranch        *b_trkcosmicscore_containmenttagger_pmtrajfit;   //!
   TBranch        *b_trkcosmictype_containmenttagger_pmtrajfit;   //!
   TBranch        *b_trkncosmictags_flashmatch_pmtrajfit;   //!
   TBranch        *b_trkcosmicscore_flashmatch_pmtrajfit;   //!
   TBranch        *b_trkcosmictype_flashmatch_pmtrajfit;   //!
   TBranch        *b_trkke_pmtrajfit;   //!
   TBranch        *b_trkrange_pmtrajfit;   //!
   TBranch        *b_trkidtruth_pmtrajfit;   //!
   TBranch        *b_trkorigin_pmtrajfit;   //!
   TBranch        *b_trkpdgtruth_pmtrajfit;   //!
   TBranch        *b_trkefftruth_pmtrajfit;   //!
   TBranch        *b_trkpurtruth_pmtrajfit;   //!
   TBranch        *b_trkpitchc_pmtrajfit;   //!
   TBranch        *b_ntrkhits_pmtrajfit;   //!
   TBranch        *b_trkdedx_pmtrajfit;   //!
   TBranch        *b_trkdqdx_pmtrajfit;   //!
   TBranch        *b_trkresrg_pmtrajfit;   //!
   TBranch        *b_trktpc_pmtrajfit;   //!
   TBranch        *b_trkxyz_pmtrajfit;   //!
   TBranch        *b_trkstartx_pmtrajfit;   //!
   TBranch        *b_trkstarty_pmtrajfit;   //!
   TBranch        *b_trkstartz_pmtrajfit;   //!
   TBranch        *b_trkstartd_pmtrajfit;   //!
   TBranch        *b_trkendx_pmtrajfit;   //!
   TBranch        *b_trkendy_pmtrajfit;   //!
   TBranch        *b_trkendz_pmtrajfit;   //!
   TBranch        *b_trkendd_pmtrajfit;   //!
   TBranch        *b_trkflashT0_pmtrajfit;   //!
   TBranch        *b_trktrueT0_pmtrajfit;   //!
   TBranch        *b_trkg4id_pmtrajfit;   //!
   TBranch        *b_trkorig_pmtrajfit;   //!
   TBranch        *b_trkpurity_pmtrajfit;   //!
   TBranch        *b_trkcompleteness_pmtrajfit;   //!
   TBranch        *b_trktheta_pmtrajfit;   //!
   TBranch        *b_trkphi_pmtrajfit;   //!
   TBranch        *b_trkstartdcosx_pmtrajfit;   //!
   TBranch        *b_trkstartdcosy_pmtrajfit;   //!
   TBranch        *b_trkstartdcosz_pmtrajfit;   //!
   TBranch        *b_trkenddcosx_pmtrajfit;   //!
   TBranch        *b_trkenddcosy_pmtrajfit;   //!
   TBranch        *b_trkenddcosz_pmtrajfit;   //!
   TBranch        *b_trkthetaxz_pmtrajfit;   //!
   TBranch        *b_trkthetayz_pmtrajfit;   //!
   TBranch        *b_trkmom_pmtrajfit;   //!
   TBranch        *b_trkmomrange_pmtrajfit;   //!
   TBranch        *b_trkmommschi2_pmtrajfit;   //!
   TBranch        *b_trkmommsllhd_pmtrajfit;   //!
   TBranch        *b_trklen_pmtrajfit;   //!
   TBranch        *b_trksvtxid_pmtrajfit;   //!
   TBranch        *b_trkevtxid_pmtrajfit;   //!
   TBranch        *b_trkpidmvamu_pmtrajfit;   //!
   TBranch        *b_trkpidmvae_pmtrajfit;   //!
   TBranch        *b_trkpidmvapich_pmtrajfit;   //!
   TBranch        *b_trkpidmvaphoton_pmtrajfit;   //!
   TBranch        *b_trkpidmvapr_pmtrajfit;   //!
   TBranch        *b_trkpidpdg_pmtrajfit;   //!
   TBranch        *b_trkpidchi_pmtrajfit;   //!
   TBranch        *b_trkpidchipr_pmtrajfit;   //!
   TBranch        *b_trkpidchika_pmtrajfit;   //!
   TBranch        *b_trkpidchipi_pmtrajfit;   //!
   TBranch        *b_trkpidchimu_pmtrajfit;   //!
   TBranch        *b_trkpidpida_pmtrajfit;   //!
   TBranch        *b_trkpidbestplane_pmtrajfit;   //!
   TBranch        *b_trkhasPFParticle_pmtrajfit;   //!
   TBranch        *b_trkPFParticleID_pmtrajfit;   //!
   TBranch        *b_nvtx_linecluster;   //!
   TBranch        *b_vtxId_linecluster;   //!
   TBranch        *b_vtxx_linecluster;   //!
   TBranch        *b_vtxy_linecluster;   //!
   TBranch        *b_vtxz_linecluster;   //!
   TBranch        *b_vtxhasPFParticle_linecluster;   //!
   TBranch        *b_vtxPFParticleID_linecluster;   //!
   TBranch        *b_nvtx_pmtrack;   //!
   TBranch        *b_vtxId_pmtrack;   //!
   TBranch        *b_vtxx_pmtrack;   //!
   TBranch        *b_vtxy_pmtrack;   //!
   TBranch        *b_vtxz_pmtrack;   //!
   TBranch        *b_vtxhasPFParticle_pmtrack;   //!
   TBranch        *b_vtxPFParticleID_pmtrack;   //!
   TBranch        *b_nvtx_pandora;   //!
   TBranch        *b_vtxId_pandora;   //!
   TBranch        *b_vtxx_pandora;   //!
   TBranch        *b_vtxy_pandora;   //!
   TBranch        *b_vtxz_pandora;   //!
   TBranch        *b_vtxhasPFParticle_pandora;   //!
   TBranch        *b_vtxPFParticleID_pandora;   //!

   //postproc(TTree *tree=0);
   postproc( std::vector<std::string> filelist , std::string fileout );
   virtual ~postproc();
   //virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TChain *tree);
   virtual void     Loop();
   virtual void     Skim();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   // user member function
   virtual void     turnOnBranches(std::vector<std::string> branchIn , TTree *tree);
};

#endif

#ifdef postproc_cxx
/**
postproc::postproc(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("MUSUN_dunefd_1454_gen_g4filt_detsim_freco_ana.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("MUSUN_dunefd_1454_gen_g4filt_detsim_freco_ana.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("MUSUN_dunefd_1454_gen_g4filt_detsim_freco_ana.root:/analysistree");
      dir->GetObject("anatree",tree);
   }
   Init(tree);
}
**/

postproc::postproc( std::vector<std::string> filelist , std::string fileout ) : fChain(0)
{
  TChain *tChain = new TChain("analysistree/anatree");
  for (auto & file : filelist){
    std::cout<<"adding file : "<< file.c_str() <<std::endl;
    tChain->Add(file.c_str());
  }
  fout = fileout;
  Init(tChain);
}

postproc::~postproc()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t postproc::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}

Long64_t postproc::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void postproc::Init(TChain *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   processname = 0;
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("subrun", &subrun, &b_subrun);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("evttime", &evttime, &b_evttime);
   fChain->SetBranchAddress("beamtime", &beamtime, &b_beamtime);
   fChain->SetBranchAddress("pot", &pot, &b_pot);
   fChain->SetBranchAddress("isdata", &isdata, &b_isdata);
   fChain->SetBranchAddress("taulife", &taulife, &b_taulife);
   fChain->SetBranchAddress("triggernumber", &triggernumber, &b_triggernumber);
   fChain->SetBranchAddress("triggertime", &triggertime, &b_triggertime);
   fChain->SetBranchAddress("beamgatetime", &beamgatetime, &b_beamgatetime);
   fChain->SetBranchAddress("triggerbits", &triggerbits, &b_triggerbits);
   fChain->SetBranchAddress("potbnb", &potbnb, &b_potbnb);
   fChain->SetBranchAddress("potnumitgt", &potnumitgt, &b_potnumitgt);
   fChain->SetBranchAddress("potnumi101", &potnumi101, &b_potnumi101);
   fChain->SetBranchAddress("no_hits", &no_hits, &b_no_hits);
   fChain->SetBranchAddress("no_hits_stored", &no_hits_stored, &b_no_hits_stored);
   fChain->SetBranchAddress("hit_tpc", hit_tpc, &b_hit_tpc);
   fChain->SetBranchAddress("hit_plane", hit_plane, &b_hit_plane);
   fChain->SetBranchAddress("hit_wire", hit_wire, &b_hit_wire);
   fChain->SetBranchAddress("hit_channel", hit_channel, &b_hit_channel);
   fChain->SetBranchAddress("hit_peakT", hit_peakT, &b_hit_peakT);
   fChain->SetBranchAddress("hit_charge", hit_charge, &b_hit_charge);
   fChain->SetBranchAddress("hit_ph", hit_ph, &b_hit_ph);
   fChain->SetBranchAddress("hit_startT", hit_startT, &b_hit_startT);
   fChain->SetBranchAddress("hit_endT", hit_endT, &b_hit_endT);
   fChain->SetBranchAddress("hit_rms", hit_rms, &b_hit_rms);
   fChain->SetBranchAddress("hit_trueX", hit_trueX, &b_hit_trueX);
   fChain->SetBranchAddress("hit_goodnessOfFit", hit_goodnessOfFit, &b_hit_goodnessOfFit);
   fChain->SetBranchAddress("hit_multiplicity", hit_multiplicity, &b_hit_multiplicity);
   fChain->SetBranchAddress("hit_trkid", hit_trkid, &b_hit_trkid);
   fChain->SetBranchAddress("hit_trkKey", hit_trkKey, &b_hit_trkKey);
   fChain->SetBranchAddress("hit_clusterid", hit_clusterid, &b_hit_clusterid);
   fChain->SetBranchAddress("hit_clusterKey", hit_clusterKey, &b_hit_clusterKey);
   fChain->SetBranchAddress("hit_spacepointid", hit_spacepointid, &b_hit_spacepointid);
   fChain->SetBranchAddress("hit_spacepointKey", hit_spacepointKey, &b_hit_spacepointKey);
   fChain->SetBranchAddress("hit_nelec", hit_nelec, &b_hit_nelec);
   fChain->SetBranchAddress("hit_energy", hit_energy, &b_hit_energy);
   fChain->SetBranchAddress("nnuvtx", &nnuvtx, &b_nnuvtx);
   fChain->SetBranchAddress("nuvtxx", nuvtxx, &b_nuvtxx);
   fChain->SetBranchAddress("nuvtxy", nuvtxy, &b_nuvtxy);
   fChain->SetBranchAddress("nuvtxz", nuvtxz, &b_nuvtxz);
   fChain->SetBranchAddress("nuvtxpdg", nuvtxpdg, &b_nuvtxpdg);
   fChain->SetBranchAddress("nclusters", &nclusters, &b_nclusters);
   fChain->SetBranchAddress("clusterId", clusterId, &b_clusterId);
   fChain->SetBranchAddress("clusterView", clusterView, &b_clusterView);
   fChain->SetBranchAddress("cluster_StartCharge", cluster_StartCharge, &b_cluster_StartCharge);
   fChain->SetBranchAddress("cluster_StartAngle", cluster_StartAngle, &b_cluster_StartAngle);
   fChain->SetBranchAddress("cluster_EndCharge", cluster_EndCharge, &b_cluster_EndCharge);
   fChain->SetBranchAddress("cluster_EndAngle", cluster_EndAngle, &b_cluster_EndAngle);
   fChain->SetBranchAddress("cluster_Integral", cluster_Integral, &b_cluster_Integral);
   fChain->SetBranchAddress("cluster_IntegralAverage", cluster_IntegralAverage, &b_cluster_IntegralAverage);
   fChain->SetBranchAddress("cluster_SummedADC", cluster_SummedADC, &b_cluster_SummedADC);
   fChain->SetBranchAddress("cluster_SummedADCaverage", cluster_SummedADCaverage, &b_cluster_SummedADCaverage);
   fChain->SetBranchAddress("cluster_MultipleHitDensity", cluster_MultipleHitDensity, &b_cluster_MultipleHitDensity);
   fChain->SetBranchAddress("cluster_Width", cluster_Width, &b_cluster_Width);
   fChain->SetBranchAddress("cluster_NHits", cluster_NHits, &b_cluster_NHits);
   fChain->SetBranchAddress("cluster_StartWire", cluster_StartWire, &b_cluster_StartWire);
   fChain->SetBranchAddress("cluster_StartTick", cluster_StartTick, &b_cluster_StartTick);
   fChain->SetBranchAddress("cluster_EndWire", cluster_EndWire, &b_cluster_EndWire);
   fChain->SetBranchAddress("cluster_EndTick", cluster_EndTick, &b_cluster_EndTick);
   fChain->SetBranchAddress("cluncosmictags_tagger", cluncosmictags_tagger, &b_cluncosmictags_tagger);
   fChain->SetBranchAddress("clucosmicscore_tagger", clucosmicscore_tagger, &b_clucosmicscore_tagger);
   fChain->SetBranchAddress("clucosmictype_tagger", clucosmictype_tagger, &b_clucosmictype_tagger);
   fChain->SetBranchAddress("kNTracker", &kNTracker, &b_kNTracker);
   fChain->SetBranchAddress("kNVertexAlgos", &kNVertexAlgos, &b_kNVertexAlgos);
   fChain->SetBranchAddress("kNShowerAlgos", &kNShowerAlgos, &b_kNShowerAlgos);
   fChain->SetBranchAddress("mcevts_truth", &mcevts_truth, &b_mcevts_truth);
   fChain->SetBranchAddress("nuPDG_truth", nuPDG_truth, &b_nuPDG_truth);
   fChain->SetBranchAddress("ccnc_truth", ccnc_truth, &b_ccnc_truth);
   fChain->SetBranchAddress("mode_truth", mode_truth, &b_mode_truth);
   fChain->SetBranchAddress("enu_truth", enu_truth, &b_enu_truth);
   fChain->SetBranchAddress("Q2_truth", Q2_truth, &b_Q2_truth);
   fChain->SetBranchAddress("W_truth", W_truth, &b_W_truth);
   fChain->SetBranchAddress("X_truth", X_truth, &b_X_truth);
   fChain->SetBranchAddress("Y_truth", Y_truth, &b_Y_truth);
   fChain->SetBranchAddress("hitnuc_truth", hitnuc_truth, &b_hitnuc_truth);
   fChain->SetBranchAddress("nuvtxx_truth", nuvtxx_truth, &b_nuvtxx_truth);
   fChain->SetBranchAddress("nuvtxy_truth", nuvtxy_truth, &b_nuvtxy_truth);
   fChain->SetBranchAddress("nuvtxz_truth", nuvtxz_truth, &b_nuvtxz_truth);
   fChain->SetBranchAddress("nu_dcosx_truth", nu_dcosx_truth, &b_nu_dcosx_truth);
   fChain->SetBranchAddress("nu_dcosy_truth", nu_dcosy_truth, &b_nu_dcosy_truth);
   fChain->SetBranchAddress("nu_dcosz_truth", nu_dcosz_truth, &b_nu_dcosz_truth);
   fChain->SetBranchAddress("lep_mom_truth", lep_mom_truth, &b_lep_mom_truth);
   fChain->SetBranchAddress("lep_dcosx_truth", lep_dcosx_truth, &b_lep_dcosx_truth);
   fChain->SetBranchAddress("lep_dcosy_truth", lep_dcosy_truth, &b_lep_dcosy_truth);
   fChain->SetBranchAddress("lep_dcosz_truth", lep_dcosz_truth, &b_lep_dcosz_truth);
   fChain->SetBranchAddress("vx_flux", vx_flux, &b_vx_flux);
   fChain->SetBranchAddress("vy_flux", vy_flux, &b_vy_flux);
   fChain->SetBranchAddress("vz_flux", vz_flux, &b_vz_flux);
   fChain->SetBranchAddress("pdpx_flux", pdpx_flux, &b_pdpx_flux);
   fChain->SetBranchAddress("pdpy_flux", pdpy_flux, &b_pdpy_flux);
   fChain->SetBranchAddress("pdpz_flux", pdpz_flux, &b_pdpz_flux);
   fChain->SetBranchAddress("ppdxdz_flux", ppdxdz_flux, &b_ppdxdz_flux);
   fChain->SetBranchAddress("ppdydz_flux", ppdydz_flux, &b_ppdydz_flux);
   fChain->SetBranchAddress("pppz_flux", pppz_flux, &b_pppz_flux);
   fChain->SetBranchAddress("ptype_flux", ptype_flux, &b_ptype_flux);
   fChain->SetBranchAddress("ppvx_flux", ppvx_flux, &b_ppvx_flux);
   fChain->SetBranchAddress("ppvy_flux", ppvy_flux, &b_ppvy_flux);
   fChain->SetBranchAddress("ppvz_flux", ppvz_flux, &b_ppvz_flux);
   fChain->SetBranchAddress("muparpx_flux", muparpx_flux, &b_muparpx_flux);
   fChain->SetBranchAddress("muparpy_flux", muparpy_flux, &b_muparpy_flux);
   fChain->SetBranchAddress("muparpz_flux", muparpz_flux, &b_muparpz_flux);
   fChain->SetBranchAddress("mupare_flux", mupare_flux, &b_mupare_flux);
   fChain->SetBranchAddress("tgen_flux", tgen_flux, &b_tgen_flux);
   fChain->SetBranchAddress("tgptype_flux", tgptype_flux, &b_tgptype_flux);
   fChain->SetBranchAddress("tgppx_flux", tgppx_flux, &b_tgppx_flux);
   fChain->SetBranchAddress("tgppy_flux", tgppy_flux, &b_tgppy_flux);
   fChain->SetBranchAddress("tgppz_flux", tgppz_flux, &b_tgppz_flux);
   fChain->SetBranchAddress("tprivx_flux", tprivx_flux, &b_tprivx_flux);
   fChain->SetBranchAddress("tprivy_flux", tprivy_flux, &b_tprivy_flux);
   fChain->SetBranchAddress("tprivz_flux", tprivz_flux, &b_tprivz_flux);
   fChain->SetBranchAddress("dk2gen_flux", dk2gen_flux, &b_dk2gen_flux);
   fChain->SetBranchAddress("gen2vtx_flux", gen2vtx_flux, &b_gen2vtx_flux);
   fChain->SetBranchAddress("tpx_flux", tpx_flux, &b_tpx_flux);
   fChain->SetBranchAddress("tpy_flux", tpy_flux, &b_tpy_flux);
   fChain->SetBranchAddress("tpz_flux", tpz_flux, &b_tpz_flux);
   fChain->SetBranchAddress("tptype_flux", tptype_flux, &b_tptype_flux);
   fChain->SetBranchAddress("genie_no_primaries", &genie_no_primaries, &b_genie_no_primaries);
   fChain->SetBranchAddress("genie_primaries_pdg", &genie_primaries_pdg, &b_genie_primaries_pdg);
   fChain->SetBranchAddress("genie_Eng", &genie_Eng, &b_genie_Eng);
   fChain->SetBranchAddress("genie_Px", &genie_Px, &b_genie_Px);
   fChain->SetBranchAddress("genie_Py", &genie_Py, &b_genie_Py);
   fChain->SetBranchAddress("genie_Pz", &genie_Pz, &b_genie_Pz);
   fChain->SetBranchAddress("genie_P", &genie_P, &b_genie_P);
   fChain->SetBranchAddress("genie_status_code", &genie_status_code, &b_genie_status_code);
   fChain->SetBranchAddress("genie_mass", &genie_mass, &b_genie_mass);
   fChain->SetBranchAddress("genie_trackID", &genie_trackID, &b_genie_trackID);
   fChain->SetBranchAddress("genie_ND", &genie_ND, &b_genie_ND);
   fChain->SetBranchAddress("genie_mother", &genie_mother, &b_genie_mother);
   fChain->SetBranchAddress("no_primaries", &no_primaries, &b_no_primaries);
   fChain->SetBranchAddress("geant_list_size", &geant_list_size, &b_geant_list_size);
   fChain->SetBranchAddress("geant_list_size_in_tpcAV", &geant_list_size_in_tpcAV, &b_geant_list_size_in_tpcAV);
   fChain->SetBranchAddress("pdg", pdg, &b_pdg);
   fChain->SetBranchAddress("status", status, &b_status);
   fChain->SetBranchAddress("Mass", Mass, &b_Mass);
   fChain->SetBranchAddress("Eng", Eng, &b_Eng);
   fChain->SetBranchAddress("EndE", EndE, &b_EndE);
   fChain->SetBranchAddress("Px", Px, &b_Px);
   fChain->SetBranchAddress("Py", Py, &b_Py);
   fChain->SetBranchAddress("Pz", Pz, &b_Pz);
   fChain->SetBranchAddress("P", P, &b_P);
   fChain->SetBranchAddress("StartPointx", StartPointx, &b_StartPointx);
   fChain->SetBranchAddress("StartPointy", StartPointy, &b_StartPointy);
   fChain->SetBranchAddress("StartPointz", StartPointz, &b_StartPointz);
   fChain->SetBranchAddress("StartT", StartT, &b_StartT);
   fChain->SetBranchAddress("EndPointx", EndPointx, &b_EndPointx);
   fChain->SetBranchAddress("EndPointy", EndPointy, &b_EndPointy);
   fChain->SetBranchAddress("EndPointz", EndPointz, &b_EndPointz);
   fChain->SetBranchAddress("EndT", EndT, &b_EndT);
   fChain->SetBranchAddress("theta", theta, &b_theta);
   fChain->SetBranchAddress("phi", phi, &b_phi);
   fChain->SetBranchAddress("theta_xz", theta_xz, &b_theta_xz);
   fChain->SetBranchAddress("theta_yz", theta_yz, &b_theta_yz);
   fChain->SetBranchAddress("pathlen", pathlen, &b_pathlen);
   fChain->SetBranchAddress("inTPCActive", inTPCActive, &b_inTPCActive);
   fChain->SetBranchAddress("StartPointx_tpcAV", StartPointx_tpcAV, &b_StartPointx_tpcAV);
   fChain->SetBranchAddress("StartPointy_tpcAV", StartPointy_tpcAV, &b_StartPointy_tpcAV);
   fChain->SetBranchAddress("StartPointz_tpcAV", StartPointz_tpcAV, &b_StartPointz_tpcAV);
   fChain->SetBranchAddress("StartT_tpcAV", StartT_tpcAV, &b_StartT_tpcAV);
   fChain->SetBranchAddress("StartE_tpcAV", StartE_tpcAV, &b_StartE_tpcAV);
   fChain->SetBranchAddress("StartP_tpcAV", StartP_tpcAV, &b_StartP_tpcAV);
   fChain->SetBranchAddress("StartPx_tpcAV", StartPx_tpcAV, &b_StartPx_tpcAV);
   fChain->SetBranchAddress("StartPy_tpcAV", StartPy_tpcAV, &b_StartPy_tpcAV);
   fChain->SetBranchAddress("StartPz_tpcAV", StartPz_tpcAV, &b_StartPz_tpcAV);
   fChain->SetBranchAddress("EndPointx_tpcAV", EndPointx_tpcAV, &b_EndPointx_tpcAV);
   fChain->SetBranchAddress("EndPointy_tpcAV", EndPointy_tpcAV, &b_EndPointy_tpcAV);
   fChain->SetBranchAddress("EndPointz_tpcAV", EndPointz_tpcAV, &b_EndPointz_tpcAV);
   fChain->SetBranchAddress("EndT_tpcAV", EndT_tpcAV, &b_EndT_tpcAV);
   fChain->SetBranchAddress("EndE_tpcAV", EndE_tpcAV, &b_EndE_tpcAV);
   fChain->SetBranchAddress("EndP_tpcAV", EndP_tpcAV, &b_EndP_tpcAV);
   fChain->SetBranchAddress("EndPx_tpcAV", EndPx_tpcAV, &b_EndPx_tpcAV);
   fChain->SetBranchAddress("EndPy_tpcAV", EndPy_tpcAV, &b_EndPy_tpcAV);
   fChain->SetBranchAddress("EndPz_tpcAV", EndPz_tpcAV, &b_EndPz_tpcAV);
   fChain->SetBranchAddress("pathlen_drifted", pathlen_drifted, &b_pathlen_drifted);
   fChain->SetBranchAddress("inTPCDrifted", inTPCDrifted, &b_inTPCDrifted);
   fChain->SetBranchAddress("StartPointx_drifted", StartPointx_drifted, &b_StartPointx_drifted);
   fChain->SetBranchAddress("StartPointy_drifted", StartPointy_drifted, &b_StartPointy_drifted);
   fChain->SetBranchAddress("StartPointz_drifted", StartPointz_drifted, &b_StartPointz_drifted);
   fChain->SetBranchAddress("StartT_drifted", StartT_drifted, &b_StartT_drifted);
   fChain->SetBranchAddress("StartE_drifted", StartE_drifted, &b_StartE_drifted);
   fChain->SetBranchAddress("StartP_drifted", StartP_drifted, &b_StartP_drifted);
   fChain->SetBranchAddress("StartPx_drifted", StartPx_drifted, &b_StartPx_drifted);
   fChain->SetBranchAddress("StartPy_drifted", StartPy_drifted, &b_StartPy_drifted);
   fChain->SetBranchAddress("StartPz_drifted", StartPz_drifted, &b_StartPz_drifted);
   fChain->SetBranchAddress("EndPointx_drifted", EndPointx_drifted, &b_EndPointx_drifted);
   fChain->SetBranchAddress("EndPointy_drifted", EndPointy_drifted, &b_EndPointy_drifted);
   fChain->SetBranchAddress("EndPointz_drifted", EndPointz_drifted, &b_EndPointz_drifted);
   fChain->SetBranchAddress("EndT_drifted", EndT_drifted, &b_EndT_drifted);
   fChain->SetBranchAddress("EndE_drifted", EndE_drifted, &b_EndE_drifted);
   fChain->SetBranchAddress("EndP_drifted", EndP_drifted, &b_EndP_drifted);
   fChain->SetBranchAddress("EndPx_drifted", EndPx_drifted, &b_EndPx_drifted);
   fChain->SetBranchAddress("EndPy_drifted", EndPy_drifted, &b_EndPy_drifted);
   fChain->SetBranchAddress("EndPz_drifted", EndPz_drifted, &b_EndPz_drifted);
   fChain->SetBranchAddress("NumberDaughters", NumberDaughters, &b_NumberDaughters);
   fChain->SetBranchAddress("Mother", Mother, &b_Mother);
   fChain->SetBranchAddress("TrackId", TrackId, &b_TrackId);
   fChain->SetBranchAddress("MergedId", MergedId, &b_MergedId);
   fChain->SetBranchAddress("origin", origin, &b_origin);
   fChain->SetBranchAddress("MCTruthIndex", MCTruthIndex, &b_MCTruthIndex);
   fChain->SetBranchAddress("process_primary", process_primary, &b_process_primary);
   fChain->SetBranchAddress("processname", &processname, &b_processname);
   fChain->SetBranchAddress("nshowers_emshower", &nshowers_emshower, &b_nshowers_emshower);
   fChain->SetBranchAddress("showerID_emshower", showerID_emshower, &b_showerID_emshower);
   fChain->SetBranchAddress("shwr_bestplane_emshower", shwr_bestplane_emshower, &b_shwr_bestplane_emshower);
   fChain->SetBranchAddress("shwr_length_emshower", shwr_length_emshower, &b_shwr_length_emshower);
   fChain->SetBranchAddress("shwr_startdcosx_emshower", shwr_startdcosx_emshower, &b_shwr_startdcosx_emshower);
   fChain->SetBranchAddress("shwr_startdcosy_emshower", shwr_startdcosy_emshower, &b_shwr_startdcosy_emshower);
   fChain->SetBranchAddress("shwr_startdcosz_emshower", shwr_startdcosz_emshower, &b_shwr_startdcosz_emshower);
   fChain->SetBranchAddress("shwr_startx_emshower", shwr_startx_emshower, &b_shwr_startx_emshower);
   fChain->SetBranchAddress("shwr_starty_emshower", shwr_starty_emshower, &b_shwr_starty_emshower);
   fChain->SetBranchAddress("shwr_startz_emshower", shwr_startz_emshower, &b_shwr_startz_emshower);
   fChain->SetBranchAddress("shwr_totEng_emshower", shwr_totEng_emshower, &b_shwr_totEng_emshower);
   fChain->SetBranchAddress("shwr_dedx_emshower", shwr_dedx_emshower, &b_shwr_dedx_emshower);
   fChain->SetBranchAddress("shwr_mipEng_emshower", shwr_mipEng_emshower, &b_shwr_mipEng_emshower);
   fChain->SetBranchAddress("shwr_hasPFParticle_emshower", shwr_hasPFParticle_emshower, &b_shwr_hasPFParticle_emshower);
   fChain->SetBranchAddress("shwr_PFParticleID_emshower", shwr_PFParticleID_emshower, &b_shwr_PFParticleID_emshower);
   fChain->SetBranchAddress("shwr_pidmvamu_emshower", shwr_pidmvamu_emshower, &b_shwr_pidmvamu_emshower);
   fChain->SetBranchAddress("shwr_pidmvae_emshower", shwr_pidmvae_emshower, &b_shwr_pidmvae_emshower);
   fChain->SetBranchAddress("shwr_pidmvapich_emshower", shwr_pidmvapich_emshower, &b_shwr_pidmvapich_emshower);
   fChain->SetBranchAddress("shwr_pidmvaphoton_emshower", shwr_pidmvaphoton_emshower, &b_shwr_pidmvaphoton_emshower);
   fChain->SetBranchAddress("shwr_pidmvapr_emshower", shwr_pidmvapr_emshower, &b_shwr_pidmvapr_emshower);
   fChain->SetBranchAddress("ntracks_pmtrack", &ntracks_pmtrack, &b_ntracks_pmtrack);
   fChain->SetBranchAddress("trkId_pmtrack", trkId_pmtrack, &b_trkId_pmtrack);
   fChain->SetBranchAddress("trkncosmictags_tagger_pmtrack", trkncosmictags_tagger_pmtrack, &b_trkncosmictags_tagger_pmtrack);
   fChain->SetBranchAddress("trkcosmicscore_tagger_pmtrack", trkcosmicscore_tagger_pmtrack, &b_trkcosmicscore_tagger_pmtrack);
   fChain->SetBranchAddress("trkcosmictype_tagger_pmtrack", trkcosmictype_tagger_pmtrack, &b_trkcosmictype_tagger_pmtrack);
   fChain->SetBranchAddress("trkncosmictags_containmenttagger_pmtrack", trkncosmictags_containmenttagger_pmtrack, &b_trkncosmictags_containmenttagger_pmtrack);
   fChain->SetBranchAddress("trkcosmicscore_containmenttagger_pmtrack", trkcosmicscore_containmenttagger_pmtrack, &b_trkcosmicscore_containmenttagger_pmtrack);
   fChain->SetBranchAddress("trkcosmictype_containmenttagger_pmtrack", trkcosmictype_containmenttagger_pmtrack, &b_trkcosmictype_containmenttagger_pmtrack);
   fChain->SetBranchAddress("trkncosmictags_flashmatch_pmtrack", trkncosmictags_flashmatch_pmtrack, &b_trkncosmictags_flashmatch_pmtrack);
   fChain->SetBranchAddress("trkcosmicscore_flashmatch_pmtrack", trkcosmicscore_flashmatch_pmtrack, &b_trkcosmicscore_flashmatch_pmtrack);
   fChain->SetBranchAddress("trkcosmictype_flashmatch_pmtrack", trkcosmictype_flashmatch_pmtrack, &b_trkcosmictype_flashmatch_pmtrack);
   fChain->SetBranchAddress("trkke_pmtrack", trkke_pmtrack, &b_trkke_pmtrack);
   fChain->SetBranchAddress("trkrange_pmtrack", trkrange_pmtrack, &b_trkrange_pmtrack);
   fChain->SetBranchAddress("trkidtruth_pmtrack", trkidtruth_pmtrack, &b_trkidtruth_pmtrack);
   fChain->SetBranchAddress("trkorigin_pmtrack", trkorigin_pmtrack, &b_trkorigin_pmtrack);
   fChain->SetBranchAddress("trkpdgtruth_pmtrack", trkpdgtruth_pmtrack, &b_trkpdgtruth_pmtrack);
   fChain->SetBranchAddress("trkefftruth_pmtrack", trkefftruth_pmtrack, &b_trkefftruth_pmtrack);
   fChain->SetBranchAddress("trkpurtruth_pmtrack", trkpurtruth_pmtrack, &b_trkpurtruth_pmtrack);
   fChain->SetBranchAddress("trkpitchc_pmtrack", trkpitchc_pmtrack, &b_trkpitchc_pmtrack);
   fChain->SetBranchAddress("ntrkhits_pmtrack", ntrkhits_pmtrack, &b_ntrkhits_pmtrack);
   fChain->SetBranchAddress("trkdedx_pmtrack", trkdedx_pmtrack, &b_trkdedx_pmtrack);
   fChain->SetBranchAddress("trkdqdx_pmtrack", trkdqdx_pmtrack, &b_trkdqdx_pmtrack);
   fChain->SetBranchAddress("trkresrg_pmtrack", trkresrg_pmtrack, &b_trkresrg_pmtrack);
   fChain->SetBranchAddress("trktpc_pmtrack", trktpc_pmtrack, &b_trktpc_pmtrack);
   fChain->SetBranchAddress("trkxyz_pmtrack", trkxyz_pmtrack, &b_trkxyz_pmtrack);
   fChain->SetBranchAddress("trkstartx_pmtrack", trkstartx_pmtrack, &b_trkstartx_pmtrack);
   fChain->SetBranchAddress("trkstarty_pmtrack", trkstarty_pmtrack, &b_trkstarty_pmtrack);
   fChain->SetBranchAddress("trkstartz_pmtrack", trkstartz_pmtrack, &b_trkstartz_pmtrack);
   fChain->SetBranchAddress("trkstartd_pmtrack", trkstartd_pmtrack, &b_trkstartd_pmtrack);
   fChain->SetBranchAddress("trkendx_pmtrack", trkendx_pmtrack, &b_trkendx_pmtrack);
   fChain->SetBranchAddress("trkendy_pmtrack", trkendy_pmtrack, &b_trkendy_pmtrack);
   fChain->SetBranchAddress("trkendz_pmtrack", trkendz_pmtrack, &b_trkendz_pmtrack);
   fChain->SetBranchAddress("trkendd_pmtrack", trkendd_pmtrack, &b_trkendd_pmtrack);
   fChain->SetBranchAddress("trkflashT0_pmtrack", trkflashT0_pmtrack, &b_trkflashT0_pmtrack);
   fChain->SetBranchAddress("trktrueT0_pmtrack", trktrueT0_pmtrack, &b_trktrueT0_pmtrack);
   fChain->SetBranchAddress("trkg4id_pmtrack", trkg4id_pmtrack, &b_trkg4id_pmtrack);
   fChain->SetBranchAddress("trkorig_pmtrack", trkorig_pmtrack, &b_trkorig_pmtrack);
   fChain->SetBranchAddress("trkpurity_pmtrack", trkpurity_pmtrack, &b_trkpurity_pmtrack);
   fChain->SetBranchAddress("trkcompleteness_pmtrack", trkcompleteness_pmtrack, &b_trkcompleteness_pmtrack);
   fChain->SetBranchAddress("trktheta_pmtrack", trktheta_pmtrack, &b_trktheta_pmtrack);
   fChain->SetBranchAddress("trkphi_pmtrack", trkphi_pmtrack, &b_trkphi_pmtrack);
   fChain->SetBranchAddress("trkstartdcosx_pmtrack", trkstartdcosx_pmtrack, &b_trkstartdcosx_pmtrack);
   fChain->SetBranchAddress("trkstartdcosy_pmtrack", trkstartdcosy_pmtrack, &b_trkstartdcosy_pmtrack);
   fChain->SetBranchAddress("trkstartdcosz_pmtrack", trkstartdcosz_pmtrack, &b_trkstartdcosz_pmtrack);
   fChain->SetBranchAddress("trkenddcosx_pmtrack", trkenddcosx_pmtrack, &b_trkenddcosx_pmtrack);
   fChain->SetBranchAddress("trkenddcosy_pmtrack", trkenddcosy_pmtrack, &b_trkenddcosy_pmtrack);
   fChain->SetBranchAddress("trkenddcosz_pmtrack", trkenddcosz_pmtrack, &b_trkenddcosz_pmtrack);
   fChain->SetBranchAddress("trkthetaxz_pmtrack", trkthetaxz_pmtrack, &b_trkthetaxz_pmtrack);
   fChain->SetBranchAddress("trkthetayz_pmtrack", trkthetayz_pmtrack, &b_trkthetayz_pmtrack);
   fChain->SetBranchAddress("trkmom_pmtrack", trkmom_pmtrack, &b_trkmom_pmtrack);
   fChain->SetBranchAddress("trkmomrange_pmtrack", trkmomrange_pmtrack, &b_trkmomrange_pmtrack);
   fChain->SetBranchAddress("trkmommschi2_pmtrack", trkmommschi2_pmtrack, &b_trkmommschi2_pmtrack);
   fChain->SetBranchAddress("trkmommsllhd_pmtrack", trkmommsllhd_pmtrack, &b_trkmommsllhd_pmtrack);
   fChain->SetBranchAddress("trklen_pmtrack", trklen_pmtrack, &b_trklen_pmtrack);
   fChain->SetBranchAddress("trksvtxid_pmtrack", trksvtxid_pmtrack, &b_trksvtxid_pmtrack);
   fChain->SetBranchAddress("trkevtxid_pmtrack", trkevtxid_pmtrack, &b_trkevtxid_pmtrack);
   fChain->SetBranchAddress("trkpidmvamu_pmtrack", trkpidmvamu_pmtrack, &b_trkpidmvamu_pmtrack);
   fChain->SetBranchAddress("trkpidmvae_pmtrack", trkpidmvae_pmtrack, &b_trkpidmvae_pmtrack);
   fChain->SetBranchAddress("trkpidmvapich_pmtrack", trkpidmvapich_pmtrack, &b_trkpidmvapich_pmtrack);
   fChain->SetBranchAddress("trkpidmvaphoton_pmtrack", trkpidmvaphoton_pmtrack, &b_trkpidmvaphoton_pmtrack);
   fChain->SetBranchAddress("trkpidmvapr_pmtrack", trkpidmvapr_pmtrack, &b_trkpidmvapr_pmtrack);
   fChain->SetBranchAddress("trkpidpdg_pmtrack", trkpidpdg_pmtrack, &b_trkpidpdg_pmtrack);
   fChain->SetBranchAddress("trkpidchi_pmtrack", trkpidchi_pmtrack, &b_trkpidchi_pmtrack);
   fChain->SetBranchAddress("trkpidchipr_pmtrack", trkpidchipr_pmtrack, &b_trkpidchipr_pmtrack);
   fChain->SetBranchAddress("trkpidchika_pmtrack", trkpidchika_pmtrack, &b_trkpidchika_pmtrack);
   fChain->SetBranchAddress("trkpidchipi_pmtrack", trkpidchipi_pmtrack, &b_trkpidchipi_pmtrack);
   fChain->SetBranchAddress("trkpidchimu_pmtrack", trkpidchimu_pmtrack, &b_trkpidchimu_pmtrack);
   fChain->SetBranchAddress("trkpidpida_pmtrack", trkpidpida_pmtrack, &b_trkpidpida_pmtrack);
   fChain->SetBranchAddress("trkpidbestplane_pmtrack", trkpidbestplane_pmtrack, &b_trkpidbestplane_pmtrack);
   fChain->SetBranchAddress("trkhasPFParticle_pmtrack", trkhasPFParticle_pmtrack, &b_trkhasPFParticle_pmtrack);
   fChain->SetBranchAddress("trkPFParticleID_pmtrack", trkPFParticleID_pmtrack, &b_trkPFParticleID_pmtrack);
   fChain->SetBranchAddress("ntracks_pmtracktc", &ntracks_pmtracktc, &b_ntracks_pmtracktc);
   fChain->SetBranchAddress("trkId_pmtracktc", trkId_pmtracktc, &b_trkId_pmtracktc);
   fChain->SetBranchAddress("trkncosmictags_tagger_pmtracktc", trkncosmictags_tagger_pmtracktc, &b_trkncosmictags_tagger_pmtracktc);
   fChain->SetBranchAddress("trkcosmicscore_tagger_pmtracktc", trkcosmicscore_tagger_pmtracktc, &b_trkcosmicscore_tagger_pmtracktc);
   fChain->SetBranchAddress("trkcosmictype_tagger_pmtracktc", trkcosmictype_tagger_pmtracktc, &b_trkcosmictype_tagger_pmtracktc);
   fChain->SetBranchAddress("trkncosmictags_containmenttagger_pmtracktc", trkncosmictags_containmenttagger_pmtracktc, &b_trkncosmictags_containmenttagger_pmtracktc);
   fChain->SetBranchAddress("trkcosmicscore_containmenttagger_pmtracktc", trkcosmicscore_containmenttagger_pmtracktc, &b_trkcosmicscore_containmenttagger_pmtracktc);
   fChain->SetBranchAddress("trkcosmictype_containmenttagger_pmtracktc", trkcosmictype_containmenttagger_pmtracktc, &b_trkcosmictype_containmenttagger_pmtracktc);
   fChain->SetBranchAddress("trkncosmictags_flashmatch_pmtracktc", trkncosmictags_flashmatch_pmtracktc, &b_trkncosmictags_flashmatch_pmtracktc);
   fChain->SetBranchAddress("trkcosmicscore_flashmatch_pmtracktc", trkcosmicscore_flashmatch_pmtracktc, &b_trkcosmicscore_flashmatch_pmtracktc);
   fChain->SetBranchAddress("trkcosmictype_flashmatch_pmtracktc", trkcosmictype_flashmatch_pmtracktc, &b_trkcosmictype_flashmatch_pmtracktc);
   fChain->SetBranchAddress("trkke_pmtracktc", trkke_pmtracktc, &b_trkke_pmtracktc);
   fChain->SetBranchAddress("trkrange_pmtracktc", trkrange_pmtracktc, &b_trkrange_pmtracktc);
   fChain->SetBranchAddress("trkidtruth_pmtracktc", trkidtruth_pmtracktc, &b_trkidtruth_pmtracktc);
   fChain->SetBranchAddress("trkorigin_pmtracktc", trkorigin_pmtracktc, &b_trkorigin_pmtracktc);
   fChain->SetBranchAddress("trkpdgtruth_pmtracktc", trkpdgtruth_pmtracktc, &b_trkpdgtruth_pmtracktc);
   fChain->SetBranchAddress("trkefftruth_pmtracktc", trkefftruth_pmtracktc, &b_trkefftruth_pmtracktc);
   fChain->SetBranchAddress("trkpurtruth_pmtracktc", trkpurtruth_pmtracktc, &b_trkpurtruth_pmtracktc);
   fChain->SetBranchAddress("trkpitchc_pmtracktc", trkpitchc_pmtracktc, &b_trkpitchc_pmtracktc);
   fChain->SetBranchAddress("ntrkhits_pmtracktc", ntrkhits_pmtracktc, &b_ntrkhits_pmtracktc);
   fChain->SetBranchAddress("trkdedx_pmtracktc", trkdedx_pmtracktc, &b_trkdedx_pmtracktc);
   fChain->SetBranchAddress("trkdqdx_pmtracktc", trkdqdx_pmtracktc, &b_trkdqdx_pmtracktc);
   fChain->SetBranchAddress("trkresrg_pmtracktc", trkresrg_pmtracktc, &b_trkresrg_pmtracktc);
   fChain->SetBranchAddress("trktpc_pmtracktc", trktpc_pmtracktc, &b_trktpc_pmtracktc);
   fChain->SetBranchAddress("trkxyz_pmtracktc", trkxyz_pmtracktc, &b_trkxyz_pmtracktc);
   fChain->SetBranchAddress("trkstartx_pmtracktc", trkstartx_pmtracktc, &b_trkstartx_pmtracktc);
   fChain->SetBranchAddress("trkstarty_pmtracktc", trkstarty_pmtracktc, &b_trkstarty_pmtracktc);
   fChain->SetBranchAddress("trkstartz_pmtracktc", trkstartz_pmtracktc, &b_trkstartz_pmtracktc);
   fChain->SetBranchAddress("trkstartd_pmtracktc", trkstartd_pmtracktc, &b_trkstartd_pmtracktc);
   fChain->SetBranchAddress("trkendx_pmtracktc", trkendx_pmtracktc, &b_trkendx_pmtracktc);
   fChain->SetBranchAddress("trkendy_pmtracktc", trkendy_pmtracktc, &b_trkendy_pmtracktc);
   fChain->SetBranchAddress("trkendz_pmtracktc", trkendz_pmtracktc, &b_trkendz_pmtracktc);
   fChain->SetBranchAddress("trkendd_pmtracktc", trkendd_pmtracktc, &b_trkendd_pmtracktc);
   fChain->SetBranchAddress("trkflashT0_pmtracktc", trkflashT0_pmtracktc, &b_trkflashT0_pmtracktc);
   fChain->SetBranchAddress("trktrueT0_pmtracktc", trktrueT0_pmtracktc, &b_trktrueT0_pmtracktc);
   fChain->SetBranchAddress("trkg4id_pmtracktc", trkg4id_pmtracktc, &b_trkg4id_pmtracktc);
   fChain->SetBranchAddress("trkorig_pmtracktc", trkorig_pmtracktc, &b_trkorig_pmtracktc);
   fChain->SetBranchAddress("trkpurity_pmtracktc", trkpurity_pmtracktc, &b_trkpurity_pmtracktc);
   fChain->SetBranchAddress("trkcompleteness_pmtracktc", trkcompleteness_pmtracktc, &b_trkcompleteness_pmtracktc);
   fChain->SetBranchAddress("trktheta_pmtracktc", trktheta_pmtracktc, &b_trktheta_pmtracktc);
   fChain->SetBranchAddress("trkphi_pmtracktc", trkphi_pmtracktc, &b_trkphi_pmtracktc);
   fChain->SetBranchAddress("trkstartdcosx_pmtracktc", trkstartdcosx_pmtracktc, &b_trkstartdcosx_pmtracktc);
   fChain->SetBranchAddress("trkstartdcosy_pmtracktc", trkstartdcosy_pmtracktc, &b_trkstartdcosy_pmtracktc);
   fChain->SetBranchAddress("trkstartdcosz_pmtracktc", trkstartdcosz_pmtracktc, &b_trkstartdcosz_pmtracktc);
   fChain->SetBranchAddress("trkenddcosx_pmtracktc", trkenddcosx_pmtracktc, &b_trkenddcosx_pmtracktc);
   fChain->SetBranchAddress("trkenddcosy_pmtracktc", trkenddcosy_pmtracktc, &b_trkenddcosy_pmtracktc);
   fChain->SetBranchAddress("trkenddcosz_pmtracktc", trkenddcosz_pmtracktc, &b_trkenddcosz_pmtracktc);
   fChain->SetBranchAddress("trkthetaxz_pmtracktc", trkthetaxz_pmtracktc, &b_trkthetaxz_pmtracktc);
   fChain->SetBranchAddress("trkthetayz_pmtracktc", trkthetayz_pmtracktc, &b_trkthetayz_pmtracktc);
   fChain->SetBranchAddress("trkmom_pmtracktc", trkmom_pmtracktc, &b_trkmom_pmtracktc);
   fChain->SetBranchAddress("trkmomrange_pmtracktc", trkmomrange_pmtracktc, &b_trkmomrange_pmtracktc);
   fChain->SetBranchAddress("trkmommschi2_pmtracktc", trkmommschi2_pmtracktc, &b_trkmommschi2_pmtracktc);
   fChain->SetBranchAddress("trkmommsllhd_pmtracktc", trkmommsllhd_pmtracktc, &b_trkmommsllhd_pmtracktc);
   fChain->SetBranchAddress("trklen_pmtracktc", trklen_pmtracktc, &b_trklen_pmtracktc);
   fChain->SetBranchAddress("trksvtxid_pmtracktc", trksvtxid_pmtracktc, &b_trksvtxid_pmtracktc);
   fChain->SetBranchAddress("trkevtxid_pmtracktc", trkevtxid_pmtracktc, &b_trkevtxid_pmtracktc);
   fChain->SetBranchAddress("trkpidmvamu_pmtracktc", trkpidmvamu_pmtracktc, &b_trkpidmvamu_pmtracktc);
   fChain->SetBranchAddress("trkpidmvae_pmtracktc", trkpidmvae_pmtracktc, &b_trkpidmvae_pmtracktc);
   fChain->SetBranchAddress("trkpidmvapich_pmtracktc", trkpidmvapich_pmtracktc, &b_trkpidmvapich_pmtracktc);
   fChain->SetBranchAddress("trkpidmvaphoton_pmtracktc", trkpidmvaphoton_pmtracktc, &b_trkpidmvaphoton_pmtracktc);
   fChain->SetBranchAddress("trkpidmvapr_pmtracktc", trkpidmvapr_pmtracktc, &b_trkpidmvapr_pmtracktc);
   fChain->SetBranchAddress("trkpidpdg_pmtracktc", trkpidpdg_pmtracktc, &b_trkpidpdg_pmtracktc);
   fChain->SetBranchAddress("trkpidchi_pmtracktc", trkpidchi_pmtracktc, &b_trkpidchi_pmtracktc);
   fChain->SetBranchAddress("trkpidchipr_pmtracktc", trkpidchipr_pmtracktc, &b_trkpidchipr_pmtracktc);
   fChain->SetBranchAddress("trkpidchika_pmtracktc", trkpidchika_pmtracktc, &b_trkpidchika_pmtracktc);
   fChain->SetBranchAddress("trkpidchipi_pmtracktc", trkpidchipi_pmtracktc, &b_trkpidchipi_pmtracktc);
   fChain->SetBranchAddress("trkpidchimu_pmtracktc", trkpidchimu_pmtracktc, &b_trkpidchimu_pmtracktc);
   fChain->SetBranchAddress("trkpidpida_pmtracktc", trkpidpida_pmtracktc, &b_trkpidpida_pmtracktc);
   fChain->SetBranchAddress("trkpidbestplane_pmtracktc", trkpidbestplane_pmtracktc, &b_trkpidbestplane_pmtracktc);
   fChain->SetBranchAddress("trkhasPFParticle_pmtracktc", trkhasPFParticle_pmtracktc, &b_trkhasPFParticle_pmtracktc);
   fChain->SetBranchAddress("trkPFParticleID_pmtracktc", trkPFParticleID_pmtracktc, &b_trkPFParticleID_pmtracktc);
   fChain->SetBranchAddress("ntracks_pandoraTrack", &ntracks_pandoraTrack, &b_ntracks_pandoraTrack);
   fChain->SetBranchAddress("trkId_pandoraTrack", trkId_pandoraTrack, &b_trkId_pandoraTrack);
   fChain->SetBranchAddress("trkncosmictags_tagger_pandoraTrack", trkncosmictags_tagger_pandoraTrack, &b_trkncosmictags_tagger_pandoraTrack);
   fChain->SetBranchAddress("trkcosmicscore_tagger_pandoraTrack", trkcosmicscore_tagger_pandoraTrack, &b_trkcosmicscore_tagger_pandoraTrack);
   fChain->SetBranchAddress("trkcosmictype_tagger_pandoraTrack", trkcosmictype_tagger_pandoraTrack, &b_trkcosmictype_tagger_pandoraTrack);
   fChain->SetBranchAddress("trkncosmictags_containmenttagger_pandoraTrack", trkncosmictags_containmenttagger_pandoraTrack, &b_trkncosmictags_containmenttagger_pandoraTrack);
   fChain->SetBranchAddress("trkcosmicscore_containmenttagger_pandoraTrack", trkcosmicscore_containmenttagger_pandoraTrack, &b_trkcosmicscore_containmenttagger_pandoraTrack);
   fChain->SetBranchAddress("trkcosmictype_containmenttagger_pandoraTrack", trkcosmictype_containmenttagger_pandoraTrack, &b_trkcosmictype_containmenttagger_pandoraTrack);
   fChain->SetBranchAddress("trkncosmictags_flashmatch_pandoraTrack", trkncosmictags_flashmatch_pandoraTrack, &b_trkncosmictags_flashmatch_pandoraTrack);
   fChain->SetBranchAddress("trkcosmicscore_flashmatch_pandoraTrack", trkcosmicscore_flashmatch_pandoraTrack, &b_trkcosmicscore_flashmatch_pandoraTrack);
   fChain->SetBranchAddress("trkcosmictype_flashmatch_pandoraTrack", trkcosmictype_flashmatch_pandoraTrack, &b_trkcosmictype_flashmatch_pandoraTrack);
   fChain->SetBranchAddress("trkke_pandoraTrack", trkke_pandoraTrack, &b_trkke_pandoraTrack);
   fChain->SetBranchAddress("trkrange_pandoraTrack", trkrange_pandoraTrack, &b_trkrange_pandoraTrack);
   fChain->SetBranchAddress("trkidtruth_pandoraTrack", trkidtruth_pandoraTrack, &b_trkidtruth_pandoraTrack);
   fChain->SetBranchAddress("trkorigin_pandoraTrack", trkorigin_pandoraTrack, &b_trkorigin_pandoraTrack);
   fChain->SetBranchAddress("trkpdgtruth_pandoraTrack", trkpdgtruth_pandoraTrack, &b_trkpdgtruth_pandoraTrack);
   fChain->SetBranchAddress("trkefftruth_pandoraTrack", trkefftruth_pandoraTrack, &b_trkefftruth_pandoraTrack);
   fChain->SetBranchAddress("trkpurtruth_pandoraTrack", trkpurtruth_pandoraTrack, &b_trkpurtruth_pandoraTrack);
   fChain->SetBranchAddress("trkpitchc_pandoraTrack", trkpitchc_pandoraTrack, &b_trkpitchc_pandoraTrack);
   fChain->SetBranchAddress("ntrkhits_pandoraTrack", ntrkhits_pandoraTrack, &b_ntrkhits_pandoraTrack);
   fChain->SetBranchAddress("trkdedx_pandoraTrack", trkdedx_pandoraTrack, &b_trkdedx_pandoraTrack);
   fChain->SetBranchAddress("trkdqdx_pandoraTrack", trkdqdx_pandoraTrack, &b_trkdqdx_pandoraTrack);
   fChain->SetBranchAddress("trkresrg_pandoraTrack", trkresrg_pandoraTrack, &b_trkresrg_pandoraTrack);
   fChain->SetBranchAddress("trktpc_pandoraTrack", trktpc_pandoraTrack, &b_trktpc_pandoraTrack);
   fChain->SetBranchAddress("trkxyz_pandoraTrack", trkxyz_pandoraTrack, &b_trkxyz_pandoraTrack);
   fChain->SetBranchAddress("trkstartx_pandoraTrack", trkstartx_pandoraTrack, &b_trkstartx_pandoraTrack);
   fChain->SetBranchAddress("trkstarty_pandoraTrack", trkstarty_pandoraTrack, &b_trkstarty_pandoraTrack);
   fChain->SetBranchAddress("trkstartz_pandoraTrack", trkstartz_pandoraTrack, &b_trkstartz_pandoraTrack);
   fChain->SetBranchAddress("trkstartd_pandoraTrack", trkstartd_pandoraTrack, &b_trkstartd_pandoraTrack);
   fChain->SetBranchAddress("trkendx_pandoraTrack", trkendx_pandoraTrack, &b_trkendx_pandoraTrack);
   fChain->SetBranchAddress("trkendy_pandoraTrack", trkendy_pandoraTrack, &b_trkendy_pandoraTrack);
   fChain->SetBranchAddress("trkendz_pandoraTrack", trkendz_pandoraTrack, &b_trkendz_pandoraTrack);
   fChain->SetBranchAddress("trkendd_pandoraTrack", trkendd_pandoraTrack, &b_trkendd_pandoraTrack);
   fChain->SetBranchAddress("trkflashT0_pandoraTrack", trkflashT0_pandoraTrack, &b_trkflashT0_pandoraTrack);
   fChain->SetBranchAddress("trktrueT0_pandoraTrack", trktrueT0_pandoraTrack, &b_trktrueT0_pandoraTrack);
   fChain->SetBranchAddress("trkg4id_pandoraTrack", trkg4id_pandoraTrack, &b_trkg4id_pandoraTrack);
   fChain->SetBranchAddress("trkorig_pandoraTrack", trkorig_pandoraTrack, &b_trkorig_pandoraTrack);
   fChain->SetBranchAddress("trkpurity_pandoraTrack", trkpurity_pandoraTrack, &b_trkpurity_pandoraTrack);
   fChain->SetBranchAddress("trkcompleteness_pandoraTrack", trkcompleteness_pandoraTrack, &b_trkcompleteness_pandoraTrack);
   fChain->SetBranchAddress("trktheta_pandoraTrack", trktheta_pandoraTrack, &b_trktheta_pandoraTrack);
   fChain->SetBranchAddress("trkphi_pandoraTrack", trkphi_pandoraTrack, &b_trkphi_pandoraTrack);
   fChain->SetBranchAddress("trkstartdcosx_pandoraTrack", trkstartdcosx_pandoraTrack, &b_trkstartdcosx_pandoraTrack);
   fChain->SetBranchAddress("trkstartdcosy_pandoraTrack", trkstartdcosy_pandoraTrack, &b_trkstartdcosy_pandoraTrack);
   fChain->SetBranchAddress("trkstartdcosz_pandoraTrack", trkstartdcosz_pandoraTrack, &b_trkstartdcosz_pandoraTrack);
   fChain->SetBranchAddress("trkenddcosx_pandoraTrack", trkenddcosx_pandoraTrack, &b_trkenddcosx_pandoraTrack);
   fChain->SetBranchAddress("trkenddcosy_pandoraTrack", trkenddcosy_pandoraTrack, &b_trkenddcosy_pandoraTrack);
   fChain->SetBranchAddress("trkenddcosz_pandoraTrack", trkenddcosz_pandoraTrack, &b_trkenddcosz_pandoraTrack);
   fChain->SetBranchAddress("trkthetaxz_pandoraTrack", trkthetaxz_pandoraTrack, &b_trkthetaxz_pandoraTrack);
   fChain->SetBranchAddress("trkthetayz_pandoraTrack", trkthetayz_pandoraTrack, &b_trkthetayz_pandoraTrack);
   fChain->SetBranchAddress("trkmom_pandoraTrack", trkmom_pandoraTrack, &b_trkmom_pandoraTrack);
   fChain->SetBranchAddress("trkmomrange_pandoraTrack", trkmomrange_pandoraTrack, &b_trkmomrange_pandoraTrack);
   fChain->SetBranchAddress("trkmommschi2_pandoraTrack", trkmommschi2_pandoraTrack, &b_trkmommschi2_pandoraTrack);
   fChain->SetBranchAddress("trkmommsllhd_pandoraTrack", trkmommsllhd_pandoraTrack, &b_trkmommsllhd_pandoraTrack);
   fChain->SetBranchAddress("trklen_pandoraTrack", trklen_pandoraTrack, &b_trklen_pandoraTrack);
   fChain->SetBranchAddress("trksvtxid_pandoraTrack", trksvtxid_pandoraTrack, &b_trksvtxid_pandoraTrack);
   fChain->SetBranchAddress("trkevtxid_pandoraTrack", trkevtxid_pandoraTrack, &b_trkevtxid_pandoraTrack);
   fChain->SetBranchAddress("trkpidmvamu_pandoraTrack", trkpidmvamu_pandoraTrack, &b_trkpidmvamu_pandoraTrack);
   fChain->SetBranchAddress("trkpidmvae_pandoraTrack", trkpidmvae_pandoraTrack, &b_trkpidmvae_pandoraTrack);
   fChain->SetBranchAddress("trkpidmvapich_pandoraTrack", trkpidmvapich_pandoraTrack, &b_trkpidmvapich_pandoraTrack);
   fChain->SetBranchAddress("trkpidmvaphoton_pandoraTrack", trkpidmvaphoton_pandoraTrack, &b_trkpidmvaphoton_pandoraTrack);
   fChain->SetBranchAddress("trkpidmvapr_pandoraTrack", trkpidmvapr_pandoraTrack, &b_trkpidmvapr_pandoraTrack);
   fChain->SetBranchAddress("trkpidpdg_pandoraTrack", trkpidpdg_pandoraTrack, &b_trkpidpdg_pandoraTrack);
   fChain->SetBranchAddress("trkpidchi_pandoraTrack", trkpidchi_pandoraTrack, &b_trkpidchi_pandoraTrack);
   fChain->SetBranchAddress("trkpidchipr_pandoraTrack", trkpidchipr_pandoraTrack, &b_trkpidchipr_pandoraTrack);
   fChain->SetBranchAddress("trkpidchika_pandoraTrack", trkpidchika_pandoraTrack, &b_trkpidchika_pandoraTrack);
   fChain->SetBranchAddress("trkpidchipi_pandoraTrack", trkpidchipi_pandoraTrack, &b_trkpidchipi_pandoraTrack);
   fChain->SetBranchAddress("trkpidchimu_pandoraTrack", trkpidchimu_pandoraTrack, &b_trkpidchimu_pandoraTrack);
   fChain->SetBranchAddress("trkpidpida_pandoraTrack", trkpidpida_pandoraTrack, &b_trkpidpida_pandoraTrack);
   fChain->SetBranchAddress("trkpidbestplane_pandoraTrack", trkpidbestplane_pandoraTrack, &b_trkpidbestplane_pandoraTrack);
   fChain->SetBranchAddress("trkhasPFParticle_pandoraTrack", trkhasPFParticle_pandoraTrack, &b_trkhasPFParticle_pandoraTrack);
   fChain->SetBranchAddress("trkPFParticleID_pandoraTrack", trkPFParticleID_pandoraTrack, &b_trkPFParticleID_pandoraTrack);
   fChain->SetBranchAddress("ntracks_pmtrajfit", &ntracks_pmtrajfit, &b_ntracks_pmtrajfit);
   fChain->SetBranchAddress("trkId_pmtrajfit", trkId_pmtrajfit, &b_trkId_pmtrajfit);
   fChain->SetBranchAddress("trkncosmictags_tagger_pmtrajfit", trkncosmictags_tagger_pmtrajfit, &b_trkncosmictags_tagger_pmtrajfit);
   fChain->SetBranchAddress("trkcosmicscore_tagger_pmtrajfit", trkcosmicscore_tagger_pmtrajfit, &b_trkcosmicscore_tagger_pmtrajfit);
   fChain->SetBranchAddress("trkcosmictype_tagger_pmtrajfit", trkcosmictype_tagger_pmtrajfit, &b_trkcosmictype_tagger_pmtrajfit);
   fChain->SetBranchAddress("trkncosmictags_containmenttagger_pmtrajfit", trkncosmictags_containmenttagger_pmtrajfit, &b_trkncosmictags_containmenttagger_pmtrajfit);
   fChain->SetBranchAddress("trkcosmicscore_containmenttagger_pmtrajfit", trkcosmicscore_containmenttagger_pmtrajfit, &b_trkcosmicscore_containmenttagger_pmtrajfit);
   fChain->SetBranchAddress("trkcosmictype_containmenttagger_pmtrajfit", trkcosmictype_containmenttagger_pmtrajfit, &b_trkcosmictype_containmenttagger_pmtrajfit);
   fChain->SetBranchAddress("trkncosmictags_flashmatch_pmtrajfit", trkncosmictags_flashmatch_pmtrajfit, &b_trkncosmictags_flashmatch_pmtrajfit);
   fChain->SetBranchAddress("trkcosmicscore_flashmatch_pmtrajfit", trkcosmicscore_flashmatch_pmtrajfit, &b_trkcosmicscore_flashmatch_pmtrajfit);
   fChain->SetBranchAddress("trkcosmictype_flashmatch_pmtrajfit", trkcosmictype_flashmatch_pmtrajfit, &b_trkcosmictype_flashmatch_pmtrajfit);
   fChain->SetBranchAddress("trkke_pmtrajfit", trkke_pmtrajfit, &b_trkke_pmtrajfit);
   fChain->SetBranchAddress("trkrange_pmtrajfit", trkrange_pmtrajfit, &b_trkrange_pmtrajfit);
   fChain->SetBranchAddress("trkidtruth_pmtrajfit", trkidtruth_pmtrajfit, &b_trkidtruth_pmtrajfit);
   fChain->SetBranchAddress("trkorigin_pmtrajfit", trkorigin_pmtrajfit, &b_trkorigin_pmtrajfit);
   fChain->SetBranchAddress("trkpdgtruth_pmtrajfit", trkpdgtruth_pmtrajfit, &b_trkpdgtruth_pmtrajfit);
   fChain->SetBranchAddress("trkefftruth_pmtrajfit", trkefftruth_pmtrajfit, &b_trkefftruth_pmtrajfit);
   fChain->SetBranchAddress("trkpurtruth_pmtrajfit", trkpurtruth_pmtrajfit, &b_trkpurtruth_pmtrajfit);
   fChain->SetBranchAddress("trkpitchc_pmtrajfit", trkpitchc_pmtrajfit, &b_trkpitchc_pmtrajfit);
   fChain->SetBranchAddress("ntrkhits_pmtrajfit", ntrkhits_pmtrajfit, &b_ntrkhits_pmtrajfit);
   fChain->SetBranchAddress("trkdedx_pmtrajfit", trkdedx_pmtrajfit, &b_trkdedx_pmtrajfit);
   fChain->SetBranchAddress("trkdqdx_pmtrajfit", trkdqdx_pmtrajfit, &b_trkdqdx_pmtrajfit);
   fChain->SetBranchAddress("trkresrg_pmtrajfit", trkresrg_pmtrajfit, &b_trkresrg_pmtrajfit);
   fChain->SetBranchAddress("trktpc_pmtrajfit", trktpc_pmtrajfit, &b_trktpc_pmtrajfit);
   fChain->SetBranchAddress("trkxyz_pmtrajfit", trkxyz_pmtrajfit, &b_trkxyz_pmtrajfit);
   fChain->SetBranchAddress("trkstartx_pmtrajfit", trkstartx_pmtrajfit, &b_trkstartx_pmtrajfit);
   fChain->SetBranchAddress("trkstarty_pmtrajfit", trkstarty_pmtrajfit, &b_trkstarty_pmtrajfit);
   fChain->SetBranchAddress("trkstartz_pmtrajfit", trkstartz_pmtrajfit, &b_trkstartz_pmtrajfit);
   fChain->SetBranchAddress("trkstartd_pmtrajfit", trkstartd_pmtrajfit, &b_trkstartd_pmtrajfit);
   fChain->SetBranchAddress("trkendx_pmtrajfit", trkendx_pmtrajfit, &b_trkendx_pmtrajfit);
   fChain->SetBranchAddress("trkendy_pmtrajfit", trkendy_pmtrajfit, &b_trkendy_pmtrajfit);
   fChain->SetBranchAddress("trkendz_pmtrajfit", trkendz_pmtrajfit, &b_trkendz_pmtrajfit);
   fChain->SetBranchAddress("trkendd_pmtrajfit", trkendd_pmtrajfit, &b_trkendd_pmtrajfit);
   fChain->SetBranchAddress("trkflashT0_pmtrajfit", trkflashT0_pmtrajfit, &b_trkflashT0_pmtrajfit);
   fChain->SetBranchAddress("trktrueT0_pmtrajfit", trktrueT0_pmtrajfit, &b_trktrueT0_pmtrajfit);
   fChain->SetBranchAddress("trkg4id_pmtrajfit", trkg4id_pmtrajfit, &b_trkg4id_pmtrajfit);
   fChain->SetBranchAddress("trkorig_pmtrajfit", trkorig_pmtrajfit, &b_trkorig_pmtrajfit);
   fChain->SetBranchAddress("trkpurity_pmtrajfit", trkpurity_pmtrajfit, &b_trkpurity_pmtrajfit);
   fChain->SetBranchAddress("trkcompleteness_pmtrajfit", trkcompleteness_pmtrajfit, &b_trkcompleteness_pmtrajfit);
   fChain->SetBranchAddress("trktheta_pmtrajfit", trktheta_pmtrajfit, &b_trktheta_pmtrajfit);
   fChain->SetBranchAddress("trkphi_pmtrajfit", trkphi_pmtrajfit, &b_trkphi_pmtrajfit);
   fChain->SetBranchAddress("trkstartdcosx_pmtrajfit", trkstartdcosx_pmtrajfit, &b_trkstartdcosx_pmtrajfit);
   fChain->SetBranchAddress("trkstartdcosy_pmtrajfit", trkstartdcosy_pmtrajfit, &b_trkstartdcosy_pmtrajfit);
   fChain->SetBranchAddress("trkstartdcosz_pmtrajfit", trkstartdcosz_pmtrajfit, &b_trkstartdcosz_pmtrajfit);
   fChain->SetBranchAddress("trkenddcosx_pmtrajfit", trkenddcosx_pmtrajfit, &b_trkenddcosx_pmtrajfit);
   fChain->SetBranchAddress("trkenddcosy_pmtrajfit", trkenddcosy_pmtrajfit, &b_trkenddcosy_pmtrajfit);
   fChain->SetBranchAddress("trkenddcosz_pmtrajfit", trkenddcosz_pmtrajfit, &b_trkenddcosz_pmtrajfit);
   fChain->SetBranchAddress("trkthetaxz_pmtrajfit", trkthetaxz_pmtrajfit, &b_trkthetaxz_pmtrajfit);
   fChain->SetBranchAddress("trkthetayz_pmtrajfit", trkthetayz_pmtrajfit, &b_trkthetayz_pmtrajfit);
   fChain->SetBranchAddress("trkmom_pmtrajfit", trkmom_pmtrajfit, &b_trkmom_pmtrajfit);
   fChain->SetBranchAddress("trkmomrange_pmtrajfit", trkmomrange_pmtrajfit, &b_trkmomrange_pmtrajfit);
   fChain->SetBranchAddress("trkmommschi2_pmtrajfit", trkmommschi2_pmtrajfit, &b_trkmommschi2_pmtrajfit);
   fChain->SetBranchAddress("trkmommsllhd_pmtrajfit", trkmommsllhd_pmtrajfit, &b_trkmommsllhd_pmtrajfit);
   fChain->SetBranchAddress("trklen_pmtrajfit", trklen_pmtrajfit, &b_trklen_pmtrajfit);
   fChain->SetBranchAddress("trksvtxid_pmtrajfit", trksvtxid_pmtrajfit, &b_trksvtxid_pmtrajfit);
   fChain->SetBranchAddress("trkevtxid_pmtrajfit", trkevtxid_pmtrajfit, &b_trkevtxid_pmtrajfit);
   fChain->SetBranchAddress("trkpidmvamu_pmtrajfit", trkpidmvamu_pmtrajfit, &b_trkpidmvamu_pmtrajfit);
   fChain->SetBranchAddress("trkpidmvae_pmtrajfit", trkpidmvae_pmtrajfit, &b_trkpidmvae_pmtrajfit);
   fChain->SetBranchAddress("trkpidmvapich_pmtrajfit", trkpidmvapich_pmtrajfit, &b_trkpidmvapich_pmtrajfit);
   fChain->SetBranchAddress("trkpidmvaphoton_pmtrajfit", trkpidmvaphoton_pmtrajfit, &b_trkpidmvaphoton_pmtrajfit);
   fChain->SetBranchAddress("trkpidmvapr_pmtrajfit", trkpidmvapr_pmtrajfit, &b_trkpidmvapr_pmtrajfit);
   fChain->SetBranchAddress("trkpidpdg_pmtrajfit", trkpidpdg_pmtrajfit, &b_trkpidpdg_pmtrajfit);
   fChain->SetBranchAddress("trkpidchi_pmtrajfit", trkpidchi_pmtrajfit, &b_trkpidchi_pmtrajfit);
   fChain->SetBranchAddress("trkpidchipr_pmtrajfit", trkpidchipr_pmtrajfit, &b_trkpidchipr_pmtrajfit);
   fChain->SetBranchAddress("trkpidchika_pmtrajfit", trkpidchika_pmtrajfit, &b_trkpidchika_pmtrajfit);
   fChain->SetBranchAddress("trkpidchipi_pmtrajfit", trkpidchipi_pmtrajfit, &b_trkpidchipi_pmtrajfit);
   fChain->SetBranchAddress("trkpidchimu_pmtrajfit", trkpidchimu_pmtrajfit, &b_trkpidchimu_pmtrajfit);
   fChain->SetBranchAddress("trkpidpida_pmtrajfit", trkpidpida_pmtrajfit, &b_trkpidpida_pmtrajfit);
   fChain->SetBranchAddress("trkpidbestplane_pmtrajfit", trkpidbestplane_pmtrajfit, &b_trkpidbestplane_pmtrajfit);
   fChain->SetBranchAddress("trkhasPFParticle_pmtrajfit", trkhasPFParticle_pmtrajfit, &b_trkhasPFParticle_pmtrajfit);
   fChain->SetBranchAddress("trkPFParticleID_pmtrajfit", trkPFParticleID_pmtrajfit, &b_trkPFParticleID_pmtrajfit);
   fChain->SetBranchAddress("nvtx_linecluster", &nvtx_linecluster, &b_nvtx_linecluster);
   fChain->SetBranchAddress("vtxId_linecluster", vtxId_linecluster, &b_vtxId_linecluster);
   fChain->SetBranchAddress("vtxx_linecluster", vtxx_linecluster, &b_vtxx_linecluster);
   fChain->SetBranchAddress("vtxy_linecluster", vtxy_linecluster, &b_vtxy_linecluster);
   fChain->SetBranchAddress("vtxz_linecluster", vtxz_linecluster, &b_vtxz_linecluster);
   fChain->SetBranchAddress("vtxhasPFParticle_linecluster", vtxhasPFParticle_linecluster, &b_vtxhasPFParticle_linecluster);
   fChain->SetBranchAddress("vtxPFParticleID_linecluster", vtxPFParticleID_linecluster, &b_vtxPFParticleID_linecluster);
   fChain->SetBranchAddress("nvtx_pmtrack", &nvtx_pmtrack, &b_nvtx_pmtrack);
   fChain->SetBranchAddress("vtxId_pmtrack", vtxId_pmtrack, &b_vtxId_pmtrack);
   fChain->SetBranchAddress("vtxx_pmtrack", vtxx_pmtrack, &b_vtxx_pmtrack);
   fChain->SetBranchAddress("vtxy_pmtrack", vtxy_pmtrack, &b_vtxy_pmtrack);
   fChain->SetBranchAddress("vtxz_pmtrack", vtxz_pmtrack, &b_vtxz_pmtrack);
   fChain->SetBranchAddress("vtxhasPFParticle_pmtrack", vtxhasPFParticle_pmtrack, &b_vtxhasPFParticle_pmtrack);
   fChain->SetBranchAddress("vtxPFParticleID_pmtrack", vtxPFParticleID_pmtrack, &b_vtxPFParticleID_pmtrack);
   fChain->SetBranchAddress("nvtx_pandora", &nvtx_pandora, &b_nvtx_pandora);
   fChain->SetBranchAddress("vtxId_pandora", vtxId_pandora, &b_vtxId_pandora);
   fChain->SetBranchAddress("vtxx_pandora", vtxx_pandora, &b_vtxx_pandora);
   fChain->SetBranchAddress("vtxy_pandora", vtxy_pandora, &b_vtxy_pandora);
   fChain->SetBranchAddress("vtxz_pandora", vtxz_pandora, &b_vtxz_pandora);
   fChain->SetBranchAddress("vtxhasPFParticle_pandora", vtxhasPFParticle_pandora, &b_vtxhasPFParticle_pandora);
   fChain->SetBranchAddress("vtxPFParticleID_pandora", vtxPFParticleID_pandora, &b_vtxPFParticleID_pandora);
   Notify();
}

Bool_t postproc::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void postproc::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
#endif // #ifdef postProc_cxx
