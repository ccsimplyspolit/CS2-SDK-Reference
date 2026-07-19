#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x580
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathParticleRope : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad0498[0x8]; // 0x498
            bool m_bStartActive; // 0x4a0            
            uint8_t _pad04a1[0x3]; // 0x4a1
            float m_flMaxSimulationTime; // 0x4a4            
            CUtlSymbolLarge m_iszEffectName; // 0x4a8            
            // m_PathNodes_Name has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_PathNodes_Name;
            char m_PathNodes_Name[0x18]; // 0x4b0            
            float m_flParticleSpacing; // 0x4c8            
            float m_flSlack; // 0x4cc            
            float m_flRadius; // 0x4d0            
            Color m_ColorTint; // 0x4d4            
            std::int32_t m_nEffectState; // 0x4d8            
            uint8_t _pad04dc[0x4]; // 0x4dc
            // metadata: MNotSaved
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x8]; // 0x4e0            
            // m_PathNodes_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_PathNodes_Position;
            char m_PathNodes_Position[0x18]; // 0x4e8            
            // m_PathNodes_TangentIn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_PathNodes_TangentIn;
            char m_PathNodes_TangentIn[0x18]; // 0x500            
            // m_PathNodes_TangentOut has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_PathNodes_TangentOut;
            char m_PathNodes_TangentOut[0x18]; // 0x518            
            // m_PathNodes_Color has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_PathNodes_Color;
            char m_PathNodes_Color[0x18]; // 0x530            
            // m_PathNodes_PinEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<bool> m_PathNodes_PinEnabled;
            char m_PathNodes_PinEnabled[0x18]; // 0x548            
            // m_PathNodes_RadiusScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<float> m_PathNodes_RadiusScale;
            char m_PathNodes_RadiusScale[0x18]; // 0x560            
            uint8_t _pad0578[0x8];
            
            // Datamap fields:
            // CUtlSymbolLarge pathNodes; // 0x7fffffff
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputStopEndCap; // 0x0
            // void InputDestroy; // 0x0
            // CUtlSymbolLarge InputDisablePin; // 0x0
            // float InputSetRadius; // 0x0
            // float InputSetSlack; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathParticleRope because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathParticleRope) == 0x580);
    };
};
