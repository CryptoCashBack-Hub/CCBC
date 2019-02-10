// Copyright (c) 2018 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_COININFOPAGE_H
#define BITCOIN_QT_COININFOPAGE_H

#include "masternode.h"
#include "platformstyle.h"
#include "sync.h"
#include "util.h"

#include <QFrame>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMenu>
#include <QTimer>
#include <QWidget>

class ClientModel;
class WalletModel;

namespace Ui
{
	class CoininfoPage;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog for requesting payment of bitcoins */
class CoininfoPage : public QWidget
{
	Q_OBJECT

public:
	explicit CoininfoPage(QWidget* parent = 0);
	~GovernancePage();

	void setClientModel(ClientModel* clientModel);
	void setWalletModel(WalletModel* walletModel);

private:
	QMenu * contextMenu;
	int64_t nTimeFilterUpdated;
	bool fFilterUpdated;

	public Q_SLOTS:
	void updateProposalList(bool fForce = false);

Q_SIGNALS:

private:
	QTimer * timer;
	Ui::CoininfoPage* ui;
	ClientModel* clientModel;
	WalletModel* walletModel;
	QString strCurrentFilter;

};

#endif // BITCOIN_QT_COININFOPAGE_H