/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>
#import <Tweetbot/PTHTweetbotMediumViewProtocol.h>

@class UIViewController, UIView, UIPanGestureRecognizer, PTHProgressView, UIImageView, UIImage, NSString;

@interface PTHTweetbotMediumLoadingView : UIView <PTHTweetbotMediumViewProtocol> {

	PTHProgressView* _progressView;
	UIImageView* _imageView;
	UIViewController* _controller;
	UIView* _accessoryView;
	UIImage* _image;

}

@property (assign,nonatomic,__weak) UIViewController * controller;                         //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                       //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * panView; 
@property (nonatomic,__weak,readonly) UIView * flickView; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,readonly) BOOL shouldPan; 
@property (nonatomic,readonly) CGSize previewPreferredContentSize; 
-(void)doubleTap;
-(void)willPresentFrom:(CGRect)arg1 ;
-(void)dismissTo:(CGRect)arg1 ;
-(void)willShow;
-(void)willPreview;
-(void)didPreview;
-(void)configureActionSheet:(id)arg1 ;
-(UIView *)flickView;
-(BOOL)shouldPan;
-(CGSize)previewPreferredContentSize;
-(void)didPresent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(UIImage *)image;
-(void)setProgress:(double)arg1 ;
-(void)present;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(double)progress;
-(UIView *)panView;
-(void)didShow;
-(void)willHide;
-(void)didHide;
@end
