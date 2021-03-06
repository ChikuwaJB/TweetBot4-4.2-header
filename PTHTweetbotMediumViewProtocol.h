/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class UIViewController, UIView, UIPanGestureRecognizer;


@protocol PTHTweetbotMediumViewProtocol <NSObject>
@property (assign,nonatomic,__weak) UIViewController * controller; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (nonatomic,__weak,readonly) UIView * panView; 
@property (nonatomic,__weak,readonly) UIView * flickView; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,readonly) BOOL shouldPan; 
@property (nonatomic,readonly) CGSize previewPreferredContentSize; 
@required
-(void)doubleTap;
-(void)willPresentFrom:(CGRect)arg1;
-(void)dismissTo:(CGRect)arg1;
-(void)willShow;
-(void)willPreview;
-(void)didPreview;
-(void)configureActionSheet:(id)arg1;
-(UIView *)flickView;
-(BOOL)shouldPan;
-(CGSize)previewPreferredContentSize;
-(void)didPresent;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)present;
-(void)setAccessoryView:(id)arg1;
-(UIView *)accessoryView;
-(UIViewController *)controller;
-(void)setController:(id)arg1;
-(UIView *)panView;
-(void)didShow;
-(void)willHide;
-(void)didHide;

@end

