/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIInputViewAudioFeedback.h>
#import <Tweetbot/PTHTweetbotPostDraftUpdateProtocol.h>

@class UIVisualEffectView, UIView, UILabel, PTHTweetbotPostToolbarResultsView, PTHButton, UIButton, PTHTweetbotPostDraft, PTHTweetbotEntity, PTHTweetbotPostController, NSString;

@interface PTHTweetbotPostToolbarView : UIView <UIInputViewAudioFeedback, PTHTweetbotPostDraftUpdateProtocol> {

	UIVisualEffectView* _contentView;
	UIView* _controlsView;
	UILabel* _instructionsLabel;
	PTHTweetbotPostToolbarResultsView* _resultsView;
	PTHButton* _draftsButton;
	UIButton* _userButton;
	UIButton* _hashtagButton;
	PTHTweetbotPostDraft* _draft;
	UIButton* _mediaButton;
	UIButton* _locationButton;
	unsigned long long _state;
	PTHTweetbotEntity* _selectedEntity;

}

@property (assign,nonatomic,__weak) PTHTweetbotPostController * controller; 
@property (nonatomic,retain) PTHTweetbotPostDraft * draft;                               //@synthesize draft=_draft - In the implementation block
@property (nonatomic,retain) UIButton * mediaButton;                                     //@synthesize mediaButton=_mediaButton - In the implementation block
@property (nonatomic,retain) UIButton * locationButton;                                  //@synthesize locationButton=_locationButton - In the implementation block
@property (nonatomic,retain) UIButton * draftsButton;                                    //@synthesize draftsButton=_draftsButton - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntity * selectedEntity;                         //@synthesize selectedEntity=_selectedEntity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL enableInputClicksWhenVisible; 
-(void)draftDidUpdate;
-(void)draftSelectedRangeDidChange;
-(PTHTweetbotPostDraft *)draft;
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(UIButton *)draftsButton;
-(UIButton *)mediaButton;
-(UIButton *)locationButton;
-(void)setSelectedEntity:(PTHTweetbotEntity *)arg1 ;
-(void)addHashtag:(id)arg1 ;
-(void)_draftsDidChange;
-(PTHTweetbotEntity *)selectedEntity;
-(void)_addUserOrHashtag:(id)arg1 ;
-(void)setMediaButton:(UIButton *)arg1 ;
-(void)setLocationButton:(UIButton *)arg1 ;
-(void)setDraftsButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(PTHTweetbotPostController *)controller;
-(void)setController:(PTHTweetbotPostController *)arg1 ;
-(BOOL)enableInputClicksWhenVisible;
-(void)addUser:(id)arg1 ;
@end

