### Ccbc is a fork of [CCBC](https://github.com/CCBC-Project/CCBC) that forked [Dash](https://github.com/dashpay/dash) that forked [Bitcoin](https://github.com/bitcoin/bitcoinp)


# Ccbc Core integration/staging repository


### Coin Specs
<table>
<tr><td>Algo</td><td>Quark</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply </td><td>100,000,000 CCBC</td></tr>
<tr><td>Premine</td><td>4,000,000 CCBC</td></tr>
</table>


### Reward Distribution Per Block

<table>
<th colspan=4>PoW Phase</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th><th>Duration (Days)</th></tr>
<tr><td>0</td><td>250 CCBC</td><td>Genesis Block</td><td>0 Days</td></tr>
<tr><td>1</td><td>4,000,000 CCBC</td><td>Initial Premine</td><td>0 Days</td></tr>
<tr><td>2-200</td><td>1 CCBC</td><td rowspan=1>Closed Mining</td><td>1 Days</td></tr>
<tr><th colspan=4>PoS / MN Phase</th></tr>
<tr><td>200-25000</td><td>1 CCBC</td><td rowspan=1>Coin Swap</td><td>17.22 Days</td></tr>
<tr><td>25000-50000</td><td>25 CCBC</td><td rowspan=1>First Increase </td><td>17.36 Days</td></tr>
<tr><td>50000-75000</td><td>50 CCBC</td><td rowspan=1>Second Increase </td><td>17.36 Days</td></tr>
<tr><td>75000-100000</td><td>85 CCBC</td><td rowspan=1>Final Increase </td><td>17.36 Days</td></tr>
<tr><td>100000-125000</td><td>75 CCBC</td><td rowspan=1>First Reduction </td><td>17.36 Days</td></tr>
<tr><td>125000-168000</td><td>50 CCBC</td><td rowspan=1>Second Reduction </td><td>30 Days</td></tr>
<tr><td>168000-297600</td><td>25 CCBC</td><td rowspan=1>Thrid Reduction </td><td>90 Days</td></tr>
<tr><td>297600-556800</td><td>10 CCBC</td><td rowspan=1>Final Reduction </td><td>180 Days</td></tr>
<tr><td>556800+</td><td>5 CCBC</td><td rowspan=1>Till Max Supply </td><td>57,026.38 Days</td></tr>
</table>


### Masternode Rewards Per Block, 5000 CCBC Collateral

<table>
<tr><th>Block Height</th><th>MN Reward Amount</th><th>PoS Reward Amount</th><th>Duration (Days)</th><th>Development Fee</th></tr>
<tr><td>201-25000</td><td>80%</td><td>20%</td><td>17.2 Days</td><td>0%</td></tr>
<tr><td>25000-60000 </td><td>40%</td><td>60%</td><td>17.22 Days</td><td>0%</td></tr>
<tr><td>60000-65000 </td><td>42%</td><td>58%</td><td>3.47 Days</td><td>10%</td></tr>
<tr><td>65000-70000 </td><td>44%</td><td>56%</td><td>3.47 Days</td><td>10%</td></tr>
<tr><td>70000-75000 </td><td>46%</td><td>54%</td><td>3.47 Days</td><td>10%</td></tr>
<tr><td>75000-80000 </td><td>48%</td><td>52%</td><td>3.47 Days</td><td>10%</td></tr>
<tr><td>80000-85000 </td><td>50%</td><td>50%</td><td>2.08 Days</td><td>10%</td></tr>
<tr><td>85000-88000 </td><td>53%</td><td>47%</td><td>2.08 Days</td><td>10%</td></tr>
<tr><td>88000-91000 </td><td>56%</td><td>44%</td><td>2.08 Days</td><td>10%</td></tr>
<tr><td>91000-94000 </td><td>59%</td><td>41%</td><td>2.08 Days</td><td>10%</td></tr>
<tr><td>94000-97000 </td><td>62%</td><td>38%</td><td>2.08 Days</td><td>10%</td></tr>
<tr><td>97000-100000 </td><td>65%</td><td>35%</td><td>2.08 Days</td><td>10%</td></tr>
<tr><td>100000-125000 </td><td>70%</td><td>30%</td><td>17.36 Days</td><td>10%</td></tr>
<tr><td>125000-150000 </td><td>75%</td><td>25%</td><td>17.36 Days</td><td>10%</td></tr>
<tr><td>150000-175000 </td><td>80%</td><td>20%</td><td>17.36 Days</td><td>10%</td></tr>
<tr><td>SeeSaw Rewards from this point on</td></tr>
</table>

MN Port: 5520
RPC Port: 15520
