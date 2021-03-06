/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface CSXCWakeNotifier : NSObject
{
    NSMutableArray *_didWakeObservers;
    NSObject<OS_dispatch_queue> *_notifierQueue;
    struct IONotificationPort *notifyPortRef;
    unsigned int notifierObject;
    unsigned int root_port;
}

+ (void)removeObserver:(id)arg1;
+ (id)addObserverForSystemDidWakeEventsWithCallback:(id)arg1;
+ (id)sharedNotifier;
- (void).cxx_destruct;
- (void)allowSystemSleepForNotification:(long long)arg1;
- (void)systemDidWakeEvent;
- (void)removeObserver:(id)arg1;
- (void)addObserverForSystemDidWakeEvents:(id)arg1;
- (void)dealloc;
- (id)init;

@end

