//
//  UBLocation.h
//  Übersicht
//
//  Created by Felix Hageloh on 9/12/14.
//  Copyright (c) 2014 tracesOf. All rights reserved.
//

#import <Foundation/Foundation.h>

@import WebKit;
@import CoreLocation;

@interface UBLocation : NSObject<CLLocationManagerDelegate, WKScriptMessageHandler>

//- (id) initWithContext:(JSContextRef)context;
//- (void)getCurrentPosition:(WebScriptObject *)callback;
@end
