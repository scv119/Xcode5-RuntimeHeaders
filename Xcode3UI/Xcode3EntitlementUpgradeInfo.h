/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface Xcode3EntitlementUpgradeInfo : NSObject
{
    NSString *_name;
    id _value;
    NSString *_description;
}

+ (id)entitlementUpgradeWithName:(id)arg1 value:(id)arg2 description:(id)arg3;
@property(readonly) NSString *description; // @synthesize description=_description;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2 description:(id)arg3;

@end

