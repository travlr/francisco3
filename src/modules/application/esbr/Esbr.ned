package org.car2x.veins.modules.application.esbr;
import org.car2x.veins.modules.application.ieee80211p.BaseWaveApplLayer;

simple Esbr extends BaseWaveApplLayer
{
    @class(Esbr);
    @display("i=block/app2");

    double hostToJunctionDistanceThreshold = default(20);
    double sendWarningInterval = default(2.0);
    double neighborLifetimeThreshold = default(2.0);
    double senderReceiverDistanceThreshold = default(20);
    int indexOfAccidentNode = default(0);

    @signal[warningReceivedSignal](type=long);
    @statistic[warningReceivedSignal](record=count,vector; description="Warning Message Received");

    @signal[beaconReceivedSignal](type=long);
    @statistic[beaconReceivedSignal](record=count,vector; description="Beacon Message Received");

    @signal[messageReceivedSignal](type=long);
    @statistic[messageReceivedSignal](record=count,vector; description="Message Received");

    @signal[newWarningReceivedSignal](type=long);
    @statistic[newWarningReceivedSignal](record=count,vector; description="New Warning Message Received");
}
