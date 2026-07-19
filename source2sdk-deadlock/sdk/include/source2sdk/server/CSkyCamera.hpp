#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"

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
        // Size: 0x540
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "sky3dparams_t m_skyboxData"
        // static metadata: MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
        #pragma pack(push, 1)
        class CSkyCamera : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::server::sky3dparams_t m_skyboxData; // 0x4a0            
            // metadata: MNetworkEnable
            CUtlStringToken m_skyboxSlotToken; // 0x530            
            bool m_bUseAngles; // 0x534            
            uint8_t _pad0535[0x3]; // 0x535
            // metadata: MNotSaved
            source2sdk::server::CSkyCamera* m_pNext; // 0x538            
            
            // Datamap fields:
            // int16_t m_skyboxData.scale; // 0x4a8
            // Vector m_skyboxData.origin; // 0x4ac
            // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4b8
            // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4bc
            // bool m_skyboxData.fog.enable; // 0x524
            // bool m_skyboxData.fog.blend; // 0x525
            // Vector m_skyboxData.fog.dirPrimary; // 0x4c8
            // Color m_skyboxData.fog.colorPrimary; // 0x4d4
            // Color m_skyboxData.fog.colorSecondary; // 0x4d8
            // float m_skyboxData.fog.start; // 0x4e4
            // float m_skyboxData.fog.end; // 0x4e8
            // float m_skyboxData.fog.maxdensity; // 0x4f0
            // void InputActivateSkybox; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkyCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSkyCamera) == 0x540);
    };
};
