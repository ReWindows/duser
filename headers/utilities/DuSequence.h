#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 37 member(s).
class DuSequence {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiAddKeyFrame@DuSequence@@QEAAJPEAUAddKeyFrameMsg@Sequence@@@Z
    long ApiAddKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiAddRef@DuSequence@@QEAAJPEAUAddRefMsg@Sequence@@@Z
    long ApiAddRef(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiFindKeyFrame@DuSequence@@QEAAJPEAUFindKeyFrameMsg@Sequence@@@Z
    long ApiFindKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetDelay@DuSequence@@QEAAJPEAUGetDelayMsg@Sequence@@@Z
    long ApiGetDelay(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetFlow@DuSequence@@QEAAJPEAUGetFlowMsg@Sequence@@@Z
    long ApiGetFlow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetFramePause@DuSequence@@QEAAJPEAUGetFramePauseMsg@Sequence@@@Z
    long ApiGetFramePause(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetInterpolation@DuSequence@@QEAAJPEAUGetInterpolationMsg@Sequence@@@Z
    long ApiGetInterpolation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetKeyFrame@DuSequence@@QEAAJPEAUGetKeyFrameMsg@Sequence@@@Z
    long ApiGetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetKeyFrameCount@DuSequence@@QEAAJPEAUGetKeyFrameCountMsg@Sequence@@@Z
    long ApiGetKeyFrameCount(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetLength@DuSequence@@QEAAJPEAUGetLengthMsg@Sequence@@@Z
    long ApiGetLength(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetTime@DuSequence@@QEAAJPEAUGetTimeMsg@Sequence@@@Z
    long ApiGetTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGotoTime@DuSequence@@QEAAJPEAUGotoTimeMsg@Sequence@@@Z
    long ApiGotoTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnEvent@DuSequence@@QEAAJPEAUEventMsg@@@Z
    long ApiOnEvent(EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiPlay@DuSequence@@QEAAJPEAUPlayMsg@Sequence@@@Z
    long ApiPlay(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRelease@DuSequence@@QEAAJPEAUReleaseMsg@Sequence@@@Z
    long ApiRelease(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRemoveAllKeyFrames@DuSequence@@QEAAJPEAURemoveAllKeyFramesMsg@Sequence@@@Z
    long ApiRemoveAllKeyFrames(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRemoveKeyFrame@DuSequence@@QEAAJPEAURemoveKeyFrameMsg@Sequence@@@Z
    long ApiRemoveKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiReset@DuSequence@@QEAAJPEAUResetMsg@Sequence@@@Z
    long ApiReset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetDelay@DuSequence@@QEAAJPEAUSetDelayMsg@Sequence@@@Z
    long ApiSetDelay(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetFlow@DuSequence@@QEAAJPEAUSetFlowMsg@Sequence@@@Z
    long ApiSetFlow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetFramePause@DuSequence@@QEAAJPEAUSetFramePauseMsg@Sequence@@@Z
    long ApiSetFramePause(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetInterpolation@DuSequence@@QEAAJPEAUSetInterpolationMsg@Sequence@@@Z
    long ApiSetInterpolation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetKeyFrame@DuSequence@@QEAAJPEAUSetKeyFrameMsg@Sequence@@@Z
    long ApiSetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetTime@DuSequence@@QEAAJPEAUSetTimeMsg@Sequence@@@Z
    long ApiSetTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiStop@DuSequence@@QEAAJPEAUStopMsg@Sequence@@@Z
    long ApiStop(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuSequence@@QEAA@XZ
    ~DuSequence();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionProc@DuSequence@@KAXPEAUGMA_ACTIONINFO@@@Z
    static void ActionProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildAnimation@DuSequence@@IEAAJH@Z
    long BuildAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckComplete@DuSequence@@IEBAJXZ
    long CheckComplete() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareItems@DuSequence@@KAHPEBX0@Z
    static int CompareItems(void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAtTime@DuSequence@@IEBAXMPEAH@Z
    void FindAtTime(float, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@DuSequence@@IEAAIPEAUEventMsg@@@Z
    unsigned int OnAnimationComplete(EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueAnimation@DuSequence@@IEAAJH@Z
    long QueueAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllKeyFrames@DuSequence@@IEAAXXZ
    void RemoveAllKeyFrames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSubject@DuSequence@@IEAAXPEAVVisual@@H@Z
    void ResetSubject(Visual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DuSequence@@IEAAXH@Z
    void Stop(int);
};
