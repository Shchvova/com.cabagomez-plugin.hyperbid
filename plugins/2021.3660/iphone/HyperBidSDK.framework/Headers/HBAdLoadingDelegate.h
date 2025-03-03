//
//  HBAdLoadingDelegate.h
//  HyperBidSDK
//
//  Created by Leo on 04/07/2018.
//  Copyright © 2018 Leo. All rights reserved.
//

#ifndef HBAdLoadingDelegate_h
#define HBAdLoadingDelegate_h
@protocol HBAdLoadingDelegate<NSObject>


-(void) didFinishLoadingADWithPlacementID:(NSString *)placementID;
-(void) didFailToLoadADWithPlacementID:(NSString*)placementID error:(NSError*)error;


//v 5.7.77
-(void) didFinishLoadingSplashADWithPlacementID:(NSString *)placementID isTimeout:(BOOL)isTimeout;
-(void) didTimeoutLoadingSplashADWithPlacementID:(NSString *)placementID;

@end
#endif /* HBAdLoadingDelegate_h */
