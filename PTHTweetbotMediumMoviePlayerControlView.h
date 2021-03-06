/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayer, PTHButton, NSTimer;

@interface PTHTweetbotMediumMoviePlayerControlView : UIView {

	AVPlayer* _player;
	PTHButton* _pausePlayButton;
	id _timeObserver;
	BOOL _wasPlayingBeforeScrub;
	NSTimer* _hideTimer;
	BOOL _scrubbing;

}

@property (nonatomic,readonly) AVPlayer * player;                            //@synthesize player=_player - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;              //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
-(void)_togglePlay;
-(void)_startScrubbing;
-(void)_scrub:(id)arg1 ;
-(void)_stopScrubbing;
-(void)didPause;
-(void)startHideTimer;
-(void)stopHideTimer;
-(void)setScrubbing:(BOOL)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(BOOL)isScrubbing;
-(BOOL)isPlaying;
-(AVPlayer *)player;
-(void)hide;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)didStart;
-(void)toggle;
@end

