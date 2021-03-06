/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"
//
//#import "FBClassProvidable-Protocol.h"
//#import "MessageSenderDelegate-Protocol.h"

@class FBMMQTTSender, FBMThread, FBNetworkActivityManager, MessageSender, NSNotificationCenter, /*NSObject<MessageSenderDelegate>,*/ ThreadMessage;

@interface MQTTMessageSender : NSObject //<FBClassProvidable, MessageSenderDelegate>
{
    FBNetworkActivityManager *_networkActivityManager;
    NSNotificationCenter *_notificationCenter;
    FBMMQTTSender *_mqttSender;
//    id <FBAuthenticationManager> _authManager;
    FBMThread *_thread;
    ThreadMessage *_message;
    MessageSender *_apiMessageSender;
//    NSObject<MessageSenderDelegate> *_delegate;
}

@property(retain, nonatomic) ThreadMessage *message; // @synthesize message=_message;
//@property(nonatomic) NSObject<MessageSenderDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)thread:(id)arg1 couldNotSendMessage:(id)arg2 error:(id)arg3;
- (void)thread:(id)arg1 didSendMessage:(id)arg2;
- (void)sendViaAPI;
- (void)mqttSendFinishedWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)sendMessage:(id)arg1 thread:(id)arg2 delegate:(id)arg3;
- (BOOL)okToSendViaMQTT;
- (void)dealloc;
- (id)initWithNetworkActivityManager:(id)arg1 notificationCenter:(id)arg2 mqttSender:(id)arg3 authManager:(id)arg4;
- (id)initWithProviderMapData:(id)arg1;

@end

