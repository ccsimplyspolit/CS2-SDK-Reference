#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xaa0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
        // static metadata: MNetworkVarNames "int m_vecConnectionDir"
        // static metadata: MNetworkVarNames "Vector m_vTangentIn"
        // static metadata: MNetworkVarNames "Vector m_vTangentOut"
        // static metadata: MNetworkVarNames "float m_flCumulativeDistance"
        // static metadata: MNetworkVarNames "int16 m_iNodeIndex"
        // static metadata: MNetworkVarNames "int16 m_eCaptureState"
        // static metadata: MNetworkVarNames "int16 m_iPrimaryLane"
        // static metadata: MNetworkVarNames "bool m_bUseBaseLaneColor"
        // static metadata: MNetworkVarNames "int16 m_nRopesParity"
        // static metadata: MNetworkVarNames "bool m_bCornerNode"
        // static metadata: MNetworkVarNames "bool m_bCapturable"
        // static metadata: MNetworkVarNames "bool m_bDisableZippingToByPlayers"
        // static metadata: MNetworkVarNames "float m_flSpeedMultiplierToBaseBonus"
        // static metadata: MNetworkVarNames "float m_flSpeedMultiplierFromBaseBonus"
        // static metadata: MNetworkVarNames "EHANDLE m_hGuardingBosses"
        // static metadata: MNetworkVarNames "float m_flRopeRadius"
        #pragma pack(push, 1)
        class CCitadelZipLineNode : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09a8[0x70]; // 0x9a8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "connectionsChanged"
            // metadata: MNotSaved
            // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::CCitadelZipLineNode>> m_vecConnections;
            char m_vecConnections[0x18]; // 0xa18            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_vecConnectionDir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_vecConnectionDir;
            char m_vecConnectionDir[0x18]; // 0xa30            
            // metadata: MNetworkEnable
            Vector m_vTangentIn; // 0xa48            
            // metadata: MNetworkEnable
            Vector m_vTangentOut; // 0xa54            
            // metadata: MNetworkEnable
            float m_flCumulativeDistance; // 0xa60            
            // metadata: MNetworkEnable
            std::int16_t m_iNodeIndex; // 0xa64            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int16_t m_eCaptureState; // 0xa66            
            // metadata: MNetworkEnable
            std::int16_t m_iPrimaryLane; // 0xa68            
            // metadata: MNetworkEnable
            bool m_bUseBaseLaneColor; // 0xa6a            
            uint8_t _pad0a6b[0x1]; // 0xa6b
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int16_t m_nRopesParity; // 0xa6c            
            // metadata: MNetworkEnable
            bool m_bCornerNode; // 0xa6e            
            // metadata: MNetworkEnable
            bool m_bCapturable; // 0xa6f            
            // metadata: MNetworkEnable
            bool m_bDisableZippingToByPlayers; // 0xa70            
            uint8_t _pad0a71[0x3]; // 0xa71
            // metadata: MNetworkEnable
            float m_flSpeedMultiplierToBaseBonus; // 0xa74            
            // metadata: MNetworkEnable
            float m_flSpeedMultiplierFromBaseBonus; // 0xa78            
            uint8_t _pad0a7c[0x4]; // 0xa7c
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hGuardingBosses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hGuardingBosses;
            char m_hGuardingBosses[0x18]; // 0xa80            
            // metadata: MNetworkEnable
            float m_flRopeRadius; // 0xa98            
            uint8_t _pad0a9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelZipLineNode) == 0xaa0);
    };
};
