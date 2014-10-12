//
// Generated file, do not edit! Created by opp_msgc 4.4 from base/messages/ChannelSenseRequest.msg.
//

#ifndef _CHANNELSENSEREQUEST_M_H_
#define _CHANNELSENSEREQUEST_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0404
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "ChannelState.h"
// }}



/**
 * Enum generated from <tt>base/messages/ChannelSenseRequest.msg</tt> by opp_msgc.
 * <pre>
 * enum SenseMode {
 *     UNTIL_IDLE = 1;		
 *     UNTIL_BUSY = 2;		
 *     UNTIL_TIMEOUT = 3;	
 * };
 * </pre>
 */
enum SenseMode {
    UNTIL_IDLE = 1,
    UNTIL_BUSY = 2,
    UNTIL_TIMEOUT = 3
};

/**
 * Class generated from <tt>base/messages/ChannelSenseRequest.msg</tt> by opp_msgc.
 * <pre>
 * packet ChannelSenseRequest
 * {
 *     int senseMode enum(SenseMode);	
 *     simtime_t senseTimeout; 		
 *     ChannelState result; 			
 * 									
 * }
 * </pre>
 */
class ChannelSenseRequest : public ::cPacket
{
  protected:
    int senseMode_var;
    simtime_t senseTimeout_var;
    ChannelState result_var;

  private:
    void copy(const ChannelSenseRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ChannelSenseRequest&);

  public:
    ChannelSenseRequest(const char *name=NULL, int kind=0);
    ChannelSenseRequest(const ChannelSenseRequest& other);
    virtual ~ChannelSenseRequest();
    ChannelSenseRequest& operator=(const ChannelSenseRequest& other);
    virtual ChannelSenseRequest *dup() const {return new ChannelSenseRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSenseMode() const;
    virtual void setSenseMode(int senseMode);
    virtual simtime_t getSenseTimeout() const;
    virtual void setSenseTimeout(simtime_t senseTimeout);
    virtual ChannelState& getResult();
    virtual const ChannelState& getResult() const {return const_cast<ChannelSenseRequest*>(this)->getResult();}
    virtual void setResult(const ChannelState& result);
};

inline void doPacking(cCommBuffer *b, ChannelSenseRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ChannelSenseRequest& obj) {obj.parsimUnpack(b);}


#endif // _CHANNELSENSEREQUEST_M_H_
