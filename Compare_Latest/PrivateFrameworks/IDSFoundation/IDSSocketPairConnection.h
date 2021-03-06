//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMapTable, NSMutableArray, NSMutableData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface IDSSocketPairConnection : NSObject
{
    NSMutableData *_headerData;
    NSMutableData *_currentMessageData;
    NSMapTable *_delegateToInfo;
    unsigned int _currentOutgoingDataIndex;
    NSData *_outgoingData;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeSourceIsResumed;
    BOOL _isConnected;
    unsigned int _currentDataLength;
    long _bytesReceived;
    double _prevBPS;
    int _connectedSocket;
    double _lastDateCheck;
}

@property(readonly, nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) int socket; // @synthesize socket=_connectedSocket;
- (void)_endSession;
@property(readonly, nonatomic) BOOL isEmpty;
- (BOOL)sendDataMessage:(id)arg1;
- (void)_startServer;
- (void)_setupWriteSource;
- (void)_sourceCancelled;
- (void)_sendToConnectedSocket;
- (void)_processBytesAvailable;
- (int)_read:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)endSession;
- (void)dealloc;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

@end

