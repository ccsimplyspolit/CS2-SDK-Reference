#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particleslib/IParticleEffect.hpp"
namespace source2sdk
{
    namespace particles
    {
        struct IParticleCollection;
    };
};
namespace source2sdk
{
    namespace particleslib
    {
        struct CParticleProperty;
    };
};
namespace source2sdk
{
    namespace particleslib
    {
        struct PARTICLE_EHANDLE;
    };
};

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0xd8
        // Has VTable
        #pragma pack(push, 1)
        class CNewParticleEffect : public source2sdk::particleslib::IParticleEffect
        {
        public:
            uint8_t _pad0008[0x8]; // 0x8
            source2sdk::particleslib::CNewParticleEffect* m_pNext; // 0x10            
            source2sdk::particleslib::CNewParticleEffect* m_pPrev; // 0x18            
            source2sdk::particles::IParticleCollection* m_pParticles; // 0x20            
            char* m_pDebugName; // 0x28            
            // start of bitfield block
            uint32_t m_bDontRemove: 1;
            uint32_t m_bRemove: 1;
            uint32_t m_bNeedsBBoxUpdate: 1;
            uint32_t m_bIsFirstFrame: 1;
            uint32_t m_bAutoUpdateBBox: 1;
            uint32_t m_bAllocated: 1;
            uint32_t m_bSimulate: 1;
            uint32_t m_bShouldPerformCullCheck: 1;
            uint32_t m_bForceNoDraw: 1;
            uint32_t m_bSuppressScreenSpaceEffect: 1;
            uint32_t m_bShouldSave: 1;
            uint32_t m_bShouldSimulateDuringGamePaused: 1;
            uint32_t m_bShouldCheckFoW: 1;
            uint32_t m_bIsAsyncCreate: 1;
            uint32_t m_bFreezeTransitionActive: 1;
            uint32_t m_bFreezeTargetState: 1;
            uint32_t m_bCanFreeze: 1;
            // end of bitfield block// 17 bits
            uint8_t _pad0034[0xc]; // 0x34
            Vector m_vSortOrigin; // 0x40            
            float m_flScale; // 0x4c            
            source2sdk::particleslib::PARTICLE_EHANDLE* m_hOwner; // 0x50            
            source2sdk::particleslib::CParticleProperty* m_pOwningParticleProperty; // 0x58            
            uint8_t _pad0060[0x10]; // 0x60
            float m_flFreezeTransitionStart; // 0x70            
            float m_flFreezeTransitionDuration; // 0x74            
            float m_flFreezeTransitionOverride; // 0x78            
            Vector m_LastMin; // 0x7c            
            Vector m_LastMax; // 0x88            
            CSplitScreenSlot m_nSplitScreenUser; // 0x94            
            Vector m_vecAggregationCenter; // 0x98            
            uint8_t _pad00a4[0x2c]; // 0xa4
            std::int32_t m_RefCount; // 0xd0            
            uint8_t _pad00d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNewParticleEffect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particleslib::CNewParticleEffect) == 0xd8);
    };
};
