/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface IDEBuildRunPhaseBlueprintProviderWrapper : NSObject
{
    id <IDEBlueprintProvider> _provider;
}

+ (id)keyPathsAffectingBlueprintWrappers;
@property(readonly) id <IDEBlueprintProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)navigableItem_image;
- (id)navigableItem_name;
@property(readonly) NSArray *blueprintWrappers;
- (id)initWithBlueprintProvider:(id)arg1;

@end

