//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol DVTPlaygroundHostProcess
- (void)receiveKeyEventWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3 characters:(NSString *)arg4 charactersIgnoringModifiers:(NSString *)arg5 isARepeat:(BOOL)arg6 keyCode:(unsigned short)arg7;
- (void)receiveMouseEventWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3 eventNumber:(long long)arg4 clickCount:(long long)arg5;
@end

