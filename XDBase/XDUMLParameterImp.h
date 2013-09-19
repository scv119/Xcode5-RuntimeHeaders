/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XDBase/XDUMLNamedElementImp.h>

#import "XDUMLParameter-Protocol.h"

@class NSString;

@interface XDUMLParameterImp : XDUMLNamedElementImp <XDUMLParameter>
{
    unsigned long long _direction;
    BOOL _isOrdered;
    BOOL _isUnique;
    NSString *_default;
    id <XDUMLType> _type;
}

- (id)description;
- (long long)upper;
- (long long)lower;
- (BOOL)isUnique;
- (BOOL)isOrdered;
- (void)setType:(id)arg1;
- (id)type;
- (void)setDirection:(unsigned long long)arg1;
- (unsigned long long)direction;
- (id)default;
- (id)operation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
