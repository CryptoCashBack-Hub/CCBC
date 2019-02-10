// Copyright (c) 2018 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "coininfopage.h"
#include "ui_coininfopage.h"

#include "activemasternode.h"
#include "clientmodel.h"
#include "masternode-budget.h"
#include "masternode-sync.h"
#include "masternodeconfig.h"
#include "masternodeman.h"
#include "utilmoneystr.h"
#include "walletmodel.h"
#include "askpassphrasedialog.h"

#include <QMessageBox>
#include <QString>
#include <QTimer>
#include <QToolButton>

GovernancePage::CoininfoPage(QWidget* parent) : QWidget(parent),
ui(new Ui::CoininfoPage),
clientModel(0),
walletModel(0)
{
	ui->setupUi(this);

	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(updateProposalList()));
	timer->start(100000);

}


GovernancePage::~CoininfoPage()
{
	delete ui;
}

void CoininfoPage::setClientModel(ClientModel* model)
{
	this->clientModel = model;
}

void CoininfoPage::setWalletModel(WalletModel* model)
{
	this->walletModel = model;
}

