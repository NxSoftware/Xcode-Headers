//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

@interface DTTimelineTileDrawingContextClippableString : NSObject
{
    NSAttributedString *_attrString;
    double _width;
    struct CGPoint _position;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(copy, nonatomic) NSAttributedString *attrString; // @synthesize attrString=_attrString;
- (void).cxx_destruct;
- (id)initWithAttributedString:(id)arg1 position:(struct CGPoint)arg2 width:(double)arg3;

@end

