//
//  BreathalyzerViewController.h
//  Breathalyzer
//
//  Created by Nathan Collingridge on 4/2/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface BreathalyzerViewController : UIViewController{
@private
    EAGLContext *context;
    GLuint program;
    BOOL animating;
    NSInteger animationFrameInterval;
    CADisplayLink *displayLink;
}
@property (nonatomic) float sensorValue;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) NSInteger animationFrameInterval;

-(void)startAnimation;
-(void)stopAnimation;

@end